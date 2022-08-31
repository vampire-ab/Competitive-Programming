#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;


void solve()
{
  cin >> n;
  ll tmp;
  ll ans = 0;
  unordered_map<ll, ll> mp;
  for(int i  = 0; i < n; ++i){
    cin >> tmp;
    ++mp[tmp];
    ans = max(ans, mp[tmp]);
  }
  if(ans > (n+1)/2)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

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