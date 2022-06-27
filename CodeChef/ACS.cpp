#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  if (n == 10)
  {
    cout << 10 << endl;
  }
  else if (n == 1000)
  {
    cout << 10 << endl;
  }
  else
  {
    int ans = n % 10;
    n = n/10;
    if(n%10){
      cout << -1 << endl;
      return;
    }
    n = n/10;
    ans += n%10;
    if(ans <= 10)
      cout << ans << endl;
    else
      cout << -1 << endl;
  }
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