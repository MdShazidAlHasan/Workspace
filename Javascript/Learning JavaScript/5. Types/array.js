//array

let arr = ['cat', 'dog', 'cow', 'ant'];

console.log(arr);

const newData = [
    {'task1': 'exercise'},
    [1, 2 ,3],
    function hello() { console.log('hello')}
];

console.log(newData);

console.log(arr.length);
console.log(arr.unshift('hen'), arr);
arr.splice(1, 2);
console.log(arr)