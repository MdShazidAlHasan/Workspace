#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a;
		ll sum=0;
		for(ll i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		cout<<abs(sum)<<endl;
	}
	return 0;
}