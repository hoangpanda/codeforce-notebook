#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define all(x) begin(x),end(x)
#define pb push_back
#define pii pair<int,int>
#define str string

const ll INF = 1e18;


void solve() {
  int n; cin >> n;

  int ans = 0;

  while(n != 1) {
    if(n % 2 == 0) {
      ans += n;
      n /= 2;
    }
    else {
      ans += n;
      n = (n-1)/2;
    }
  }
  cout << ans+1 << endl;
}

signed main() {
  freopen("input.txt","r",stdin);
  
  int t; cin >> t;
  while(t--) 
    solve();

  // 1 3 4 5 6
  // 5 - 1 + 6 - 3

   

  return 0;
}