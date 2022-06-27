#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m;

void solve()
{
  cin >> n >> m;
  int p = n, q = m;
  if (n > m)
  {
    swap(n, m);
  }
  long long int a[n][m];
  a[0][0] = 0;
  long long int d = 1;
  for (int i = 0; i < n; ++i)
  {
    d = 0;
    for (int j = 0; j < m; ++j)
    {
      if (i == 0 && j == 0)
      {
        a[i][j] = 1;
        d = 1;
      }
      else if (i == 0)
      {
        a[i][j] = a[i][j - 1] + d;
      }
      else
      {
        a[i][j] = a[i - 1][j] + n + 1 + d;
        ++d;
      }
    }
  }
  if (p <= q)
  {
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        cout << a[j][i] << " ";
      }
      cout << endl;
    }
  }
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