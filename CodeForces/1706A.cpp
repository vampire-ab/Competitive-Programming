#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, m;

void solve()
{
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  string s = "#";
  for (int i = 0; i < m; ++i)
    s.push_back('B');

  for (int i = 0; i < n; ++i)
  {
    int mini = min(a[i], m + 1 - a[i]);
    if (s[mini] == 'A')
      s[max(a[i], m + 1 - a[i])] = 'A';
    else
      s[mini] = 'A';
  }
  cout << s.substr(1) << endl;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}