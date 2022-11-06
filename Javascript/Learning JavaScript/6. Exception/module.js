// importing greetPerson from greet.js file
import { greetPerson, a, b } from './greet.js';

// using greetPerson() defined in greet.js
let displayName = greetPerson('Jack');
b();
console.log(a);
console.log(displayName); // Hello Jack