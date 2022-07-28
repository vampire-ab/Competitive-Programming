#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;
const int MAX = 1e5+1;
ll a[MAX] = {};

void solve()
{
  cin >> n;
  int temp, maxi = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    a[temp]++;
    maxi = max(maxi, temp);
  }
  ll t[maxi+1];

  t[0] = 0;
  t[1] = a[1];

  for (int i = 2; i <= maxi; ++i)  
    t[i] = max(t[i-1], t[i-2]+i*a[i]);
  
  cout << t[maxi] << endl;
}

int main()
{
  solve();
}

