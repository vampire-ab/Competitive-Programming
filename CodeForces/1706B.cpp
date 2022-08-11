#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  int a[n + 1] = {};
  int b[n + 1] = {};
  int p;
  for (int i = 1; i <= n; ++i)
  {
    cin >> p;
    if ((a[p]))
    {
      if ((i - a[p]) % 2 == 1)
      {
        ++b[p];
        a[p] = i;
      }
    }
    else
    {
      a[p] = i;
      b[p]++;
    }
  }

  for (int i = 1; i <= n; ++i)
    cout << b[i] << " ";

  cout << endl;
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