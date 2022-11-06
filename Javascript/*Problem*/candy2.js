function candies(n, arr) {
    // Write your code here
    let result = Array(n).fill(1);
    for (let i=1; i<n; i++){
        if (arr[i]>arr[i-1]){
            result[i] = result[i-1]+1;
        }
    }
    let result1 = Array(n).fill(1);
    for (let i = n-2; i>-1; i--){
        if(arr[i]> arr[i+1] ){
            result1[i] = result1[i+1]+1
        }
    }
    let sum = 0;

    for (let i = 0; i<n; i++){
        sum += Math.max(result[i], result1[i])
    }
    return sum;
}
