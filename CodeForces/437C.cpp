#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m;

void solve()
{
  cin >> n>>m;
  int a[n+1];
  for(int i = 0; i < n; ++i)
    cin >> a[i+1];
  
  int x, y;
  long long ans = 0;
  for(int i = 0; i < m; ++i){
    cin >> x >> y;
    ans += min(a[x], a[y]);
  }
  cout << ans << endl;
}

int main()
{
  solve();
}