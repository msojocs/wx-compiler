const util = require('./util')
const path = require('path')
const fs = util.fs

let wcsc
try {
  wcsc = require('./src/wcsc')
} catch (err) {
  console.error('wcsc', err)
  // wcsc = require('./build/Release/wcsc.node')
}

function tranWcscResultToObject(resultStr) {
  const resultArr = resultStr.split('=')
  const result = {}
  for (let i = 0, len = resultArr.length; i < len && resultArr[i + 1]; i += 2) {
    result[resultArr[i]] = resultArr[i + 1]
  }
  return result
}

exports = async function (options) {
  if (!options) throw Error('options is required')

  // avoid undefined or null
  if (typeof options.subPackage !== 'string') {
    delete options.subPackage
  }

  if (typeof options.lazyload !== 'boolean') {
    delete options.lazyload
  }

  options = Object.assign(
    {
      files: [],
      contents: [],
      pageCount: 0,
      cwd: process.cwd,
      replaceContent: {},
      debug: false,
      classPrefix: '',
      lazyload: false,
    },
    options,
  )

  if (!options.contents.length) {
    const tasks = options.files.map((file) => {
      if (typeof options.replaceContent[file] === 'string') {
        return options.replaceContent[file]
      }
      return fs.readFile(path.resolve(options.cwd, file), 'utf8')
    })
    options.contents = await Promise.all(tasks) || []
  }

  let wcscResult
  try {
    console.warn('wcsc options', options)
    wcscResult = await wcsc(options)
    console.warn('wcsc ok')
  } catch (errmsg) {
    throw new Error(errmsg)
  }

  const result = options.lazyload ? wcscResult : tranWcscResultToObject(wcscResult)

  if (options.output) {
    const output = path.resolve(options.cwd, options.output)
    const dir = path.dirname(output)
    try {
      await fs.stat(dir)
    } catch (e) {
      await fs.mkdir(dir, {
        recursive: true,
      })
    }
    await fs.writeFile(output, JSON.stringify(result, null, 2), 'utf8')
  }

  return result
}

Object.defineProperty(exports, 'version', {
  get() {
    return wcsc.version
  },
})

module.exports = exports
