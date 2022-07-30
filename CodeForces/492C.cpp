#include <bits/stdc++.h>
using namespace std;
#define ll long long;
long long int n, l, avg;

bool greaterby(pair<int, int> &a, pair<int, int> &b)
{
  if (a.second == b.second)
  {
    return a.first < b.first;
  }
  return a.second < b.second;
}

void solve()
{
  cin >> n >> l >> avg;
  vector<pair<int, int>> v;
  long long sum = 0;
  int temp1, temp2;
  for (int i = 0; i < n; ++i)
  {
    cin >> temp1;
    sum += temp1;
    cin >> temp2;
    if (temp1 < l)
      v.push_back(make_pair(temp1, temp2));
  }
  sort(v.begin(), v.end(), greaterby);
  long long int remain = avg * n - sum;
  int i = 0;
  long long int ans = 0;
  while(remain>0)
  {
    long long int t = min(remain, l - v[i].first*1ll);
    ans += (v[i].second) * (t);
    remain -= t;
    ++i;

  }
  cout << ans << endl;
}

int main()
{
  solve();
}