Nifan Khan
Question-2:
Write a Python program that takes a string as input containing binary 
numbers separated by multiple whitespaces and creates a dictionary where 
the keys will be corresponding decimals values of each binary number.
[You are not allowed to use any built-in conversion function to convert the 
binary values to its corresponding decimal values.]

Hint: Here is an example of converting a binary value 101101 to its decimal 
value:
Decimal of 101101  = 1*(2**5) + 0*(2**4) + 1*(2**3) + 1*(2**2) + 0*(2**1) + 
1*(2**0) = 32 + 8 + 4 + 1 = 45
----------------------------------------------------------------
Sample Input 1:
101101    1010      11110  10101        10   101  1111
Sample Output 1:
{45: 101101, 10: 1010, 30: 11110, 21: 10101, 2: 10, 5: 101, 15: 1111}
Explanation1:
There are 7 numbers in the input string. The dictionary will contain the 
decimal and binary values of each number in key:value pairs. Since the 
decimal of 101101 is 45, therefore, in the dictionary 101101 was added as 
the value of the key 45.
----------------------------------------------------------------
Sample Input 2:
1101              11   110010    10110
Sample Output 2:
{13: 1101, 3: 11, 50: 110010, 22: 10110}
Explanation2:
There are 4 numbers in the input string. The dictionary will contain the 
decimal and binary values of each number in key:value pairs. 











-------------------------------------------------

Suppose you are given a list of integers. Your final task is to return a 
list that will contain the values in the following format:
[Largest, Smallest, Second largest, Second smallest,...so on...]

Write a function named weird_sort() which will receive a list on calling 
and then RETURN another list which will follow the format mentioned above. 
Then print the list that was returned from the function. You can assume the 
length of the given list will always be even, there will be no duplicate 
values, and the values will be in range(0,101).
================================================
Function Call 01:
weird_sort([9, 3, 5, 7, 16, 20])

Sample Output 01:
[20, 3, 16, 5, 9, 7]

Explanation 01:
Largest value is 20 and the smallest value is 3. That's why in case of 
output, the values of the first two indices are 20 and 3. Similarly the 
second largest value and second smallest values are 16 and 5 respectively 
which are the values of  the following two indices.

Function Call 02:
weird_sort([10,20,30,40,50,60])
================================================
Sample Output 02:
[60, 10, 50, 20, 40, 30]

Explanation 02:
Largest value is 60 and the smallest value is 10. That's why in case of 
output, the values of the first two indices are 60 and 10. Similarly the 
second largest value and second smallest values are 50 and 20 respectively 
which are the values of  the following two indices.