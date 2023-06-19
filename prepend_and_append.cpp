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
  str s; cin >> s;

  int start = 0;
  int end = n - 1;

  while(start < end) {
    if((s[start] == '1' && s[end] == '0') || (s[start]=='0' && s[end]=='1')) {
      start++;
      end--;
    }
    else 
      break;
  }
  cout << end-start+1 << endl;
}

signed main() {
  freopen("input.txt","r",stdin);
  int t; cin >> t;
  while(t--)
    solve();
  
  return 0;
}