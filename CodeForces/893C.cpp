#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 1;

long long int n, m, mn = 1e18, ans = 0;
vector<long long int> vis(MAX, 0), v(MAX);
vector<vector<long long int>> a(MAX);

void dfs(long long int node)
{
  vis[node] = 1;
  mn = min(mn, v[node]);
  for (auto i : a[node])  
    if (!vis[i])    
      dfs(i);  
}

void solve()
{
  cin >> n >> m;
  for (int i = 1; i <= n; ++i)
  {
    cin >> v[i];
  }
  for (int i = 0; i < m; ++i)
  {
    long long int x, y;
    cin >> x >> y;
    a[x].push_back(y);
    a[y].push_back(x);
  }

  for (int i = 1; i <= n; ++i)
  {
    if (!vis[i])
    {  
      mn = 1e18;
      dfs(i);
      ans += mn;
    }
  }
  cout << ans << endl;
}

int main()
{
  solve();
}