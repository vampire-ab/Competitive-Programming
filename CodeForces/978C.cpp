#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m;

void solve()
{
  cin >> n >> m;
  vector<long long int> a(n+1);
  a[0] = 0;
  for (int i = 1; i <= n; ++i)
  {
    cin >> a[i];    
    a[i] += a[i-1];    
  }
  long long int input, j = 0;
  for (int i = 0; i < m; ++i)
  {
    cin >> input;
    while (input > a[j])
      ++j;

    cout << j << " " << input - a[j-1] << endl;
  }
}

int main()
{
    solve();
}