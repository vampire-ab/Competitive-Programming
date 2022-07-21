#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, m;

void solve()
{
  cin >> n >> m;
  int k = min(n, m);

  cout << k + 1 << endl;

  for (int i = 0; i <= k; ++i)
    cout << i << " " << k - i << endl;
}

int main()
{
  solve();
}