import assert from "assert";
import { describe } from "mocha";

describe('Demo', () => {
    it('should return -1 when the value is not present', function() {
        assert.equal(-1, [1,2,3].indexOf(4));
    });
})