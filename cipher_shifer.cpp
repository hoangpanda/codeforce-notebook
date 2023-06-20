#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define ll long long
#define all(x) begin(x),end(x)
#define pb push_back
#define pii pair<int,int>
#define str string

const ll INF = 1e18;


void solve() {
  int n; cin >> n;

  
  vector<int> a(n);
  for(int i = 0; i < n; ++i)
    cin >> a[i];

  if(n == 1) {
    cout << 0 << endl;
    return;
  }
  
  sort(begin(a), end(a));

  int ans = 0;
  int start = 0;
  int end = n-1;

  while(start < end) {
    ans += (abs(a[start]-a[end]));
    start++;
    end--;
  }

  //cout << max_1 << ' ' << max_2 << endl;

  cout << ans << endl;
}

int main() {
  freopen("input.txt","r",stdin);
  
  int t; cin >> t;
  while(t--) 
    solve();

  return 0;
}