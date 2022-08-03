#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll k, n, a, b;

void solve()
{
  cin >> k >> n >> a >> b;
  if (n * a >= k && n * b >= k)
    cout << -1 << endl;    
  else
    cout << min(n, (k - n * b - 1) / (a - b)) << endl;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
    solve();
}