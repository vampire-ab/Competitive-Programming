#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  long long int ans = 0;
  cin >> n;
  long long int ctr  = 2;
  while(n--){
    ans += ctr;
    ctr*=2;
  }
  cout << ans << endl;
}

int main()
{
    solve();
  
}