#include <bits/stdc++.h>
using namespace std;
int n;

void solve()
{
  cin >> n;
  int s[n + 1], c[n + 1];
  for (int i = 1; i <= n; ++i)
    cin >> s[i];

  for (int i = 1; i <= n; ++i)
    cin >> c[i];

  int dp[4][n + 1];
  for (int i = 1; i <= 3; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {

      if (i == 1)
      {
        dp[i][j] = c[j];
        continue;
      }
      else
      {
        dp[i][j] = 1e9;
      }

      for (int k = 1; k < j; ++k)
      {
        if(dp[i-1][k] == 1e9)
          continue;        
        if (s[k] < s[j])
          dp[i][j] = min(dp[i][j], dp[i - 1][k] + c[j]);
      }
    }
  }
  int mini = 1e9;

  for (int i = 1; i <= n; ++i)  
    mini = min(mini, dp[3][i]);
  
  if (mini == 1e9)
    cout << -1 << endl;
  else
    cout << mini << endl;
}

int main()
{
  solve();
}