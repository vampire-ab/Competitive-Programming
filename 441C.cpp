#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, m, k;

void solve()
{
  cin >> n >> m >> k;
  int i = 1, j = 1;

  while (k)
  {
    int ctr;
    if (k == 1)
    {
      if (i & 1)
        ctr = (n - i) * m + m - j + 1;
      else
        ctr = (n - i) * m + j;
    }
    else
      ctr = 2;

    cout << ctr << " ";
    while (ctr)
    {
      if (i & 1)
      {
        for (j; j <= m && ctr; ++j)
        {
          cout << i << " " << j << " ";
          --ctr;
        }
        if (j == m + 1)
        {
          ++i;
          j = m;
        }
      }
      else
      {
        for (j; j >= 1 && ctr; --j)
        {
          cout << i << " " << j << " ";
          --ctr;
        }
        if (j == 0)
        {
          j = 1;
          ++i;
        }
      }
    }
    cout << endl;
    k--;
  }
}

int main()
{

  solve();
}