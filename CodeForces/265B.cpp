#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  long long int ans = 0;
  int tmp, last = 0;
  for(int i = 0; i < n; ++i){
    cin >> tmp;
    ans += tmp+1;
    if(tmp < last)
      ans += (last - 2*tmp);   
    else
      ans -= last;
    ++ans;
    last = tmp;    
  }
  cout << ans-1 << endl;
}

int main()
{
  solve();
}