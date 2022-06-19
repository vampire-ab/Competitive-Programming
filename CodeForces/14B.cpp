#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  int x;
  cin >> n >> x;
  int a[n], b[n], maxa = 0, minb = INT_MAX;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    cin >> b[i];
    if (a[i] > b[i])
      swap(a[i], b[i]);
    if (maxa < a[i])
      maxa = a[i];
    if (minb > b[i])
      minb = b[i];
  }
  if(maxa > minb){
    cout << -1 << endl;
    return;
  }
  if(x >= maxa && x <= minb){
    cout << 0 << endl;
  }
  else{
    cout << min(abs(x-maxa), abs(x-minb)) << endl;
  }
}

int main()
{
  solve();
}