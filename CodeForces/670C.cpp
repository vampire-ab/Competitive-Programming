#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m;

void solve()
{
  cin >> n;
  int temp;
  unordered_map<int, int> mp;

  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    ++mp[temp];
  }

  cin >> m;
  vector<pair<int, int>> p(m);
  for (int i = 0; i < m; ++i)
  {
    cin >> temp;
    p[i].first = mp[temp];
  }

  for (int i = 0; i < m; ++i)
  {
    cin >> temp;
    p[i].second = mp[temp];
  }

  int ind = 0;
  
  for (int i = 1; i < m; ++i)
  {
    if (p[i].first > p[ind].first)
      ind = i;

    else if (p[i].first == p[ind].first)
      if (p[i].second > p[ind].second)
        ind = i;
  }
  cout << ind+1 << endl;
}

int main()
{
  solve();
}