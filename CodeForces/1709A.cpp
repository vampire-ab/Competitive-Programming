#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  int a[4];
  cin >> a[1] >> a[2] >> a[3];
  if (a[n] == 0 || a[a[n]] == 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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