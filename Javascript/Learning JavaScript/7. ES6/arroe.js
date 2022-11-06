function abbreviation(a, b) {
    // Write your code here
    a = a.toUpperCase();
    a = a.split('')
    
    console.log(a.includes(b.split('')))
    
}

console.log(abbreviation('daBcd', 'ABC'))