// initialize your app
// and ...

console.log("====================================================================");
console.log("==============================main.js===============================");
console.log("====================================================================");
const fs = require("fs");
console.log("fs:", fs);
const wcc = require("./wcc");
console.log("wcc:", wcc);

const { createServer } = require("http");

const HOST = "0.0.0.0";
const PORT = 8083;

const Handle = {
  /**
   *
   * @param {IncomingMessage} req
   * @returns
   */
  readBody: (req) => {
    return new Promise((resolve, reject) => {
      let body = "";
      req.on("data", (d) => {
        body += d;
      });
      req.on("end", () => {
        resolve(body);
      });
    });
  },
};

const server = createServer(async (req, resp) => {
    // the first param is status code it returns
    // and the second param is response header info
    try {
        console.log("server is working...");
        if (req.url?.includes("check")) {
          resp.writeHead(200, { "Content-Type": "text/plain" });
          resp.end('ok');
          return;
        }
        if(req.url?.includes("close"))
        {
          resp.writeHead(200, { "Content-Type": "text/plain" });
          resp.end('ok');
          nw.App.quit()
          return;
        }
        const body = JSON.parse(await Handle.readBody(req));

        let result = {};
        if (req.url?.includes("wcc")) {
            result = await wcc.wcc(body);
        } else if (req.url?.includes("wcsc")){
            result = await wcc.wcsc(body);
        }
        
        if (typeof result != 'string')
        {
            // JSON
            resp.writeHead(200, { "Content-Type": "application/json" });
            resp.end(JSON.stringify(result));
        }
        else
        {
            // call end method to tell server that the request has been fulfilled
            resp.writeHead(200, { "Content-Type": "text/plain" });
            resp.end(result);
        }

    } catch (e) {
        // console.error('server error:', e)
        resp.writeHead(500, { "Content-Type": "text/plain" });
        resp.end(`${e}`);
    }
});

server.listen(PORT, HOST, (error) => {
  if (error) {
    console.log("Something wrong: ", error);
    return;
  }

  console.log(`server is listening on http://${HOST}:${PORT} ...`);
});

// nw.Window.open("index.html", {}, function (win) {});
// nw.process.exit(0)
// process.exit(0)
