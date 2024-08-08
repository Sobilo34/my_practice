function stringCompress(str) {
    let compressedStr = '';
    let i = 0;
    let count = 1;

    while (i < str.length) {
        if (str.charAt(i) === str.charAt(i + 1)) {
            count++;
        } else {
            compressedStr += str.charAt(i) + count;
            count = 1;
        }
        i++;
    }

    return compressedStr;
}

module.exports = stringCompress;

console.log(stringCompress("aaaabbccc"));