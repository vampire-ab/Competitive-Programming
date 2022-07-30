#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int k;
  cin >> k;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  sort(a, a + n);  
  if(k == 0){
    if(a[0] == 1)
      cout << -1 << endl;
    else
      cout << 1 << endl;
  }
  else if ((k > n) || (k < n && a[k] == a[k - 1]))
    cout << -1 << endl;

  else
    cout << a[k - 1] << endl;
}

int main()
{
  solve();
}