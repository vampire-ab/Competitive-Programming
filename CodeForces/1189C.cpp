#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  int a[n + 1];
  a[0] = 0;
  for (int i = 1; i <= n; ++i)  {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  int q;
  cin >> q;
  int l, r;
  for (int i = 0; i < q; ++i)
  {
    cin >> l >> r;
    cout << (a[r]-a[l-1])/10 << endl;
  }
}

int main()
{
  solve();
}