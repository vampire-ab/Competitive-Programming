#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, k;

void solve()
{
  cin >> n >> k;
  ll a[n];
  ll temp;
  vector<bool> v(60, false);
  bool ok = true;
  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    int j = 0;
    while (temp && ok)
    {
      int t = temp%k;
      temp /= k;
      if(t > 1){
        ok = false;
      }
      else if(t){
        if(v[j])
          ok = false;
        v[j] = true;
      }
      ++j;
    }
  }
  if (ok)
    cout << "YES" << endl;
  else
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