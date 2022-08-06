#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve()
{
  string s;
  cin >> s;
  s+='R';
  int n = s.size();
  int i = 0;
  int ctr = 0, ans = 0;
  while(i < n){
    while(i < n && s[i] != 'R'){
      i++;
      ctr++;
    }
    ctr++;
    i++;
    ans = max(ans, ctr);
    ctr = 0;
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