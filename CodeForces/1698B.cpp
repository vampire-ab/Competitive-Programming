#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, x;

void solve()
{
  cin >> n >> x;
  long long int a[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  if(x == 1){
    cout << (n-1)/2 << endl;
    return;
  }
  int ans = 0;
  for(int i = 1; i < n-1; ++i){
    if(a[i] > a[i-1] + a[i+1]){
      ++ans;
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