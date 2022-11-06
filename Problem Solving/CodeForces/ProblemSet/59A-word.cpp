#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cin>>s;
	int uc{0}, lc{0};
	for(char c:s)
	{
		(isupper(c)?uc:lc)++;
	}
	for(char c:s)
	{
		cout<<char(lc>=uc?tolower(c):toupper(c));
	}
	return 0;
}