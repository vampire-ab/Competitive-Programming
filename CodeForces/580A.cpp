#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  int t, l = 0;
  int ctr = 0, ans = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> t;
    if(t >= l){
      ++ctr;
      ans = max(ans, ctr);
    }
    else{
      ctr = 1;
    }
    l = t;
  }
  cout << ans << endl;

}

int main()
{

  solve();
}