#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, q;

void solve()
{
  cin >> n >> q;

  ll a[n + 1];
  a[0] = 0;
  for (int i = 1; i <= n; ++i)
  {
    cin >> a[i];
  }
  sort(a, a + n + 1);
  ll b[n + 1] = {};
  int l, r;
  for (int i = 0; i < q; ++i)
  {
    cin >> l >> r;
    ++b[l];
    if (r + 1 <= n)
      --b[r + 1];
  }
  for(int i = 1; i <= n; ++i)
    b[i] = b[i]+b[i-1];
  
  sort(b, b+n+1);
  ll ans = 0;
  for(int i = 1; i <= n; ++i){
    ans += a[i]*b[i];
  }
  cout << ans << endl;
}

int main()
{
  solve();
}