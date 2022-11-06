// program to print the text
// declaring a function
"use strict mode";
const prompt = require("prompt-sync")();

function greet(name) {
    console.log("Hello " + name + ":)");
}

// variable name can be different
let name = 'promi';

// calling function
greet(name);  

//anonymous function

let sq = function (x){ return x**2};
console.log(sq(5))