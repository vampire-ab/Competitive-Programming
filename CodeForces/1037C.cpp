#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  string a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = 0; i < n; ++i)
    if (a[i] != b[i])
      ++ans;

  for (int i = 0; i < n - 1; ++i)
    if (a[i] != b[i] && a[i + 1] != b[i + 1])    
      if (a[i] != a[i + 1])
      {
        --ans;
        ++i;
      }    

  cout << ans << endl;
}

int main()
{
  solve();
}
