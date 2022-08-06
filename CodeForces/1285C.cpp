#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void solve()
{
  cin >> n;
  ll k = sqrt(n);  
  for (k; k >= 1; --k)
  {
    ll i = n / k;
    if (k == 1)
    {
      cout << k << " " << i << endl;
      return;
    }
    if (n % k == 0)
    {      
      if (gcd(k, i) == 1)
      {
        cout << k << " " << i << endl;
        return;
      }
    }
  }
}

int main()
{

  solve();
}