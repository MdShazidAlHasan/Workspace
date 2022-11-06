
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t{0}, n{0};
    long long a{0};
 
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        vector<long long> arr1;
        vector<long long> arr2;
        for (size_t j = 0; j < n; j++)
        {
            cin >> a;
            if (a > 0)
            {
                arr1.push_back(a);
            }
            else
            {
                arr2.push_back(a);
            }
        }
        cout <<abs(abs(accumulate(arr1.begin(), arr1.end(), 0))-abs(accumulate(arr2.begin(), arr2.end(), 0)))<<endl;        
    }
 
    return 0;
}