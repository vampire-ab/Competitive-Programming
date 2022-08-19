#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, m;

void solve()
{
  cin >> n >> m;
  ll a[n + 1];
  ll b[n + 1], c[n + 1];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  b[0] = 0;
  c[0] = 0;
  for (int i = 1; i < n; ++i)
  {
    if (a[i] < a[i - 1])
    {
      b[i] = b[i - 1] + abs(a[i] - a[i - 1]);
      c[i] = c[i - 1];
    }
    else
    {
      b[i] = b[i - 1];
      c[i] = c[i - 1] + abs(a[i] - a[i - 1]);
    }
  }

  ll s, t;
  for (int i = 0; i < m; ++i)
  {
    cin >> s >> t;
    if (s < t)
      cout << abs(b[s - 1] - b[t - 1]) << endl;
    else
      cout << abs(c[s - 1] - c[t - 1]) << endl;
  }
}

int main()
{
  solve();
}