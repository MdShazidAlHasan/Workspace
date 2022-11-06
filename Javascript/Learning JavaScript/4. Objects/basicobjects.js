// object creation
const person = { 
    name: 'John',
    age: 20
};
console.log(typeof(person)); // object
console.log(person['age']);

// methods

const person1 = {
    name: 'Sam',
    age: 30,
    // using function as a value
    greet: function() { console.log('hello') }
}

person1.greet(); // hello