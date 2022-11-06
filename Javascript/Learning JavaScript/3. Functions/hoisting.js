var test;
console.log(test);

var x = 10;

function greet(a = 10){
    var x = 'hello';
    console.log(x, a);
}
greet();
console.log(x)