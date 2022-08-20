#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, H, M;

void solve()
{
  cin >> n;
  cin >> H >> M;
  int h, m;
  int sum = H * 60 + M;
  int k = 24 * 60;
  int sumi = 24 * 60;
  for (int i = 0; i < n; ++i)
  {
    cin >> h >> m;
    sumi = min((k + 60 * h + m - sum) % k, sumi);
  }
  cout << sumi / 60 << " " << sumi % 60 << endl;
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