function candies(n, arr) {
    // Write your code here
    let result = Array(n).fill(1);
    for (let i=1; i<n; i++){
        if (arr[i]>arr[i-1]){
            result[i] = result[i-1]+1;
        }
    }
    for (let i = n-2; i>-1; i--){
        if(arr[i]> arr[i+1] && result[i]<=result[i+1]){
            result[i] = result[i+1]+1
        }
    }
    let sum = 0;

    result.forEach(item => {
        sum += Number(item);
    });
    return sum;
}