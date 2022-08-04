#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, k;

void solve()
{
  cin >> n >> k;
  int a[n + 1];
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  a[n] = INT_MAX;
  sort(a, a + n);

  ll p = a[n / 2];
  ll i = n / 2, ctr = 1;  
  while (k > 0)
  {
    ll t = min((a[i+1]-a[i])*ctr, k);
    p += t/ctr;
    k -=t;
    ++ctr;
    ++i;
  }
  cout << p << endl;
}

int main()
{
  solve();
}