// creating an object
let student = { };

// adding a property
student.name = 'John';

// adding a method
student.greet = function() {
    console.log('hello');
}

// accessing a method
student.greet(); // hello

//console.log(student)

//this keyword

const fruit = {
    name:'apple',
    date:3,

    say : function(){
        console.log(`hello! i am ${this.name} and i am ${this.date} days old`)
    }
}

console.log(fruit.say())