#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;
const int MAX = 998244353;

bool sortbyfirst(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.first > b.first;
}
bool sortbysecond(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.second < b.second;
}

void solve()
{
  cin >> n;
  int k;
  cin >> k;
  long long int ans = 1;
  vector<pair<int, int>> a(n);
  long long int ctr = 1;
  int temp;
  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    a[i].first = temp;
    a[i].second = i;
  }

  partial_sort(a.begin(), a.begin() + k, a.end(), sortbyfirst);
  partial_sort(a.begin(), a.begin() + k, a.begin() + k, sortbysecond);

  long long int sum = a[k - 1].first;
  for (int i = 0; i < k - 1; ++i)
  {
    sum += a[i].first;
    ctr = a[i+1].second - a[i].second;
    ans *= ctr;
    ans %= MAX;
    ctr = 1;
  }

  cout << sum << " " << ans << endl;
}

int main()
{
  solve();
}
