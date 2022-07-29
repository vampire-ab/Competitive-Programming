#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, m;
int ans, ctr, flag = 1;
const int MAX = 1e5 + 7;
vector<int> vis(MAX, 0);
vector<int> a(MAX), b(MAX);
vector<vector<int>> v(MAX);

void dfs(int node)
{
  vis[node] = 1;

  if (v[node].size() == 1 && vis[v[node][0]]){
    if(b[node] <= m)
      ++ans;
    return;
  }
  for (auto i : v[node])
  {
    ctr = b[node];
    if (!vis[i])
    {
      if (a[i])
        ++ctr;
      else
        ctr = 0;

      b[i] = ctr;

      if (b[i] > m)
        continue;

      dfs(i);
    }
  }
}
void solve()
{
  cin >> n >> m;

  for (int i = 1; i <= n; ++i)
    cin >> a[i];

  int x, y;
  for (int i = 0; i < n - 1; ++i)
  {
    cin >> x;
    cin >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  b[1] = a[1];
  dfs(1);
  cout << ans << endl;
}
int main()
{
  solve();
}