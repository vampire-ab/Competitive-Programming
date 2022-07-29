#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, d;

void solve()
{
  cin >> n >> d;
  vector<pair<ll, ll>> v(n + 1);
  v[0] = {0, 0};
  for (int i = 1; i <= n; ++i)
  {
    cin >> v[i].first;
    cin >> v[i].second;
  }
  sort(v.begin(), v.end());
  for (int i = 1; i <= n; ++i)
    v[i].second += v[i - 1].second;

  int i = 1;
  ll ans = 0;
  int j = 1;
  while (j <= n)
  {
    if (v[i].first + d > v[j].first)
    {
      ans = max(ans, v[j].second - v[i - 1].second);
      ++j;
    }
    else
      ++i;
  }
  ans = max(ans, v[j - 1].second - v[i - 1].second);
  cout << ans << endl;
}

int main()
{
  solve();
}