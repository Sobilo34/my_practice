// 1. Write a function that takes a string as input and returns the string reversed.
// Example: Given s = "hello", return "olleh".

const { reverseString } = require('./reverse_function');

let name = "Bilal";
const str = reverseString(name);
console.log(`The name is ${name} and the reversed name is ${str}`);