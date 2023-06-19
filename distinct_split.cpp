#include <bits/stdc++.h>
using namespace std;

#define int long long
#define str string

void solve() {
  int n; cin >> n;
  str s; cin >> s;

  vector<int> f(n,0);
  vector<int> g(n,0);
  f[0] = 1;
  g[n-1] = 1;

  set<char> s1;
  s1.insert(s[0]);

  for(int i = 1; i < n; ++i) {
    int old_size = s1.size();
    s1.insert(s[i]);
    int new_size = s1.size();
    if(old_size == new_size) {
      f[i] = f[i-1];
    }
    else {
      f[i] = f[i-1] + 1;
    }
  }

  s1.clear();
  s1.insert(s[n-1]);

  for(int i = n-2; i >= 0; --i) {
    int old_size = s1.size();
    s1.insert(s[i]);
    int new_size = s1.size();
    if(old_size == new_size) {
      g[i] = g[i+1];
    }
    else {
      g[i] = g[i+1] + 1;
    }
  }


  int ans = 0;
  for(int i = 0; i < n-1; ++i) 
    ans = max(ans, f[i] + g[i+1]);

  cout << ans << endl;

}

signed main() {
  freopen("input.txt","r", stdin);
  int test; cin >> test;
  while(test--) {
    solve();
  }
  return 0;
}