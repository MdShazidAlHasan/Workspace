//
// Created by shazid on 8/30/22.
//
#include<iostream>
#include<algorithm>
#define ll long long
#define mod 1000000007
using namespace std;
int main(){
    ll n, m, ans;
    scanf("%lld %lld",&n ,&m);
    ans = n % mod * (m % mod) % mod;
    ll last = 0;
    ll inv2 = (mod - mod / 2 * 1) % mod;
    for (ll i=1; i<=min(n,m); i=last+1){
        last = min(m, n / (n / i));
        ans -= (last - i + 1) % mod * ((i + last) % mod) % mod * inv2 % mod * ((n / i) % mod) % mod;
        (ans+=mod)%=mod;
    }
    printf("%lld\n",ans);
    return 0;
}
