function decompress(compressed) {
  let result = '';
  let i = 0;
  while (i < compressed.length) {
    let j = i + 1;
    while (compressed[j] !== ']') {
      j++;
    }
    const [count, str] = compressed.slice(i, j).split('[');
    result += str.repeat(count);
    i = j + 1;
  }
  return result;
}

module.exports = decompress;
console.log(decompress('aaaabbccc')); // 'aaaabbccc'