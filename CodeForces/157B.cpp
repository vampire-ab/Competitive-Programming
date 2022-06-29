#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;
const double PI = 3.1415926536;

void solve()
{
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  sort(a, a+n, greater<int>());
  double ans = 0;
  for(int i = 0; i < n-1; i+=2){
    ans += (a[i] + a[i+1])*(abs((a[i]-a[i+1])));
  }
  if(n&1)
    ans += a[n-1]*a[n-1];
  
  printf("%0.5f", ans*PI);
}

int main()
{
  solve();
}