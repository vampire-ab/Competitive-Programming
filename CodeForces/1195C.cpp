#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  ll a[2][n];
  ll t[2][n + 1];
  for (int i = 0; i < n; ++i)
    cin >> a[0][i];

  for (int i = 0; i < n; ++i)
    cin >> a[1][i];

  t[0][0] = 0;
  t[1][0] = 0;
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 0; j <= 1; ++j)
    {
      int k = j^1;
      t[j][i] = max(t[j][i-1], t[k][i - 1] + a[k][i-1]);      
    }    
  }
  cout << max(t[1][n], t[0][n]) << endl;
}

int main()
{
  solve();
}