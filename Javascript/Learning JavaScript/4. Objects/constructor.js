class Person {
    constructor(name, age, caste) {
        this.name = name,
        this.age = age,
        this.caste = caste;

        this.say = function () {
            console.log(`hello! i am ${this.name}`);
        };
    }
}

const p1 = new Person('shazid', 20, 'brown');

console.log(p1.say());