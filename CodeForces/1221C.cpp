#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m, k;

void solve()
{
  cin >> n >> m >> k;
  if (n > m)
    swap(n, m);

  if (k < n)
  {
    int p = n;
    m = m - k;
    n = n - k;
    
    int ans = (n+m)/3 + k;

    cout << min(ans, p) << endl;
  }
  else  
    cout << n << endl;
  
}

int main()
{

  int t;
  cin >> t;
  while (t--)
    solve();
  
}