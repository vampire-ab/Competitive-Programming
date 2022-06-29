#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, d;

void solve()
{
  cin >> d >> n;
  int temp;
  long long int ans = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    if (i == n - 1)
      break;

    ans += (d - temp);
  }

  cout << ans << endl;
}

int main()
{
  solve();
}