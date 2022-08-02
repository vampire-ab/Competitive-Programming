#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

bool sortbygreater(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.first > b.first;
}

void solve()
{
  cin >> n;
  vector<int> ans;
  vector<pair<int, int>> a(n);
  long long int sum = 0;
  int temp;

  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    a[i].first = temp;
    a[i].second = i + 1;
    sum += temp;
  }

  if (n == 2)
  {
    cout << 0 << endl;
    cout << endl;
    return;
  }

  sort(a.begin(), a.end(), sortbygreater);

  if (sum - a[0].first - a[1].first == a[1].first)
    ans.push_back(a[0].second);

  sum -= a[0].first;
  for (int i = 1; i < n; ++i)
    if ((sum - a[i].first) == a[0].first)
      ans.push_back(a[i].second);

  int p = ans.size();
  cout << p << endl;

  for (int i = 0; i < p; ++i)
    cout << ans[i] << " ";

  cout << endl;
}

int main()
{
  solve();
}