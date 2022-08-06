#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, m;

void solve()
{
  cin >> n >> m;
  int b[m];
  unordered_map<int, int> mp; 
  int temp;
  for(int i = 0; i < n; ++i){
    cin >> temp;
    mp[temp] = i;
  }
  ll ans = 0;
  for(int i = 0; i < m; ++i){
    cin >> b[i];
    b[i] = mp[b[i]];
  }
  ans += 2*b[0] + 1;
  int j = 0;
  for(int i = 1; i < m ; ++i){
    if(b[i] < b[j]){
      ++ans;
    }
    else{
      ans += (b[i]-i)*2 + 1;
      j = i;
    }
  }
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