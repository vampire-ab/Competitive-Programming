#include <bits/stdc++.h>
using namespace std;

long long int n, m;

void solve()
{
  cin >> n >> m;
  long long int ans = 0;
  ans += ((m)*(m+1))/2;
  ans += (m) * (n*(n+1))/2;
  ans -= m;
  cout << ans << endl;
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