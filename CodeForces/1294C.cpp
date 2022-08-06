#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  vector<int> ans;
  int ctr = 0;
  for (int i = 2; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      ans.push_back(i);
      n /= i;
      ++ctr;
      if (ctr == 2)
      {
        if (ans[0] == n || ans[1] == n || ans[0] == ans[1])
          break;
        cout << "YES" << endl;
        cout << ans[0] << " " << ans[1] << " " << n << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
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