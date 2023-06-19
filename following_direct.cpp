#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define all(x) begin(x),end(x)
#define pb push_back
#define pii pair<int,int>
#define str string

const ll INF = 1e18;

bool check(str s) {
  int x = 0;
  int y = 0;

  for(int i = 0; i < s.size(); ++i) {
    char c = s[i];
    if(c=='U') y++;
    if(c=='D') y--;
    if(c=='R') x++;
    if(c=='L') x--;
    if(x == 1 && y == 1) return true;
  }
  return false;
}

void solve() {
  int n; cin >> n;
  str s; cin >> s;
 // cout << s << endl;

  cout << ((check(s)) ? "YES":"NO") << endl;
}

signed main() {
  freopen("input.txt","r",stdin);
  int t; cin >> t;
  while(t--)
    solve();
  
  return 0;
}