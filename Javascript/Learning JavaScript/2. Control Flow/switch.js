// program using switch statement
let a = 2;

switch (a) {

    case 1:
        a = 'one';
        break;
    case 2:
        a = 'two';
        
    default:
        console.log("value not found");
        break;
}
console.log(`The value is ${a}`);