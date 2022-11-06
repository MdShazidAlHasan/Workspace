#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const int MAX = 2e5;
 
int main() {
  int n, i;
  cin >> n;
  ll mxn = 0;
  ll ans = 0;
  for (i = 1; i <= n; i++) {
    ll x;
    cin >> x;
    mxn = max(mxn, x);
    ans += mxn - x;
  } 
  cout << ans << endl;
  return 0;
}