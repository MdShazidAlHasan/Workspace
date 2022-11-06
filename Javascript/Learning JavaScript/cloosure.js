const outerFunc = x => {
    return (y) => x+y;
}

const add = outerFunc(6)
console.log(add(1))
console.log(add(1))
let x = add(1)
console.log(x)