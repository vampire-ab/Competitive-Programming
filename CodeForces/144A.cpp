#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int temp, ind1, ind2, mini = INT_MAX, maxi = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    if (temp <= mini)
    {
      mini = temp;
      ind1 = i;
    }
    if (temp > maxi)
    {
      maxi = temp;
      ind2 = i;
    }
  }
  int ans = 0;
  ans += ind2 + n - ind1 - 1;
  if (ind1 < ind2)
  {
    --ans;
  }
  cout << ans << endl;
}

int main()
{
  solve();
}