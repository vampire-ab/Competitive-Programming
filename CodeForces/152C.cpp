#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m;
const int MAX = 1e9 + 7;
void solve()
{
  cin >> n >> m;

  vector<string> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  long long ans = 1;
  for (int i = 0; i < m; ++i)
  {
    unordered_set<char> s;
    for (int j = 0; j < n; ++j)
      s.insert(a[j][i]);
    ans *= s.size();
    ans %= MAX;
  }

  cout << ans << endl;
}

int main()
{
  solve();
}
