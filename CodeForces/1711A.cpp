#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }
  if (n & 1)
  {
    cout << n << " ";
    cout << 1 << " ";
  }
  else
  {
    cout << 2 << " ";
    cout << 1 << " ";
  }
  for (int i = 3; i < n; i += 2)
  {
    cout << i + 1 << " ";
    cout << i << " ";
  }
  if (n & 1)
    cout << 2 << " ";

  cout << endl;
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