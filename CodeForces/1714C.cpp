#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int s;

void solve()
{
  cin >> s;
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int k = 9;
  string ans = "";
  while (s > 0)
  {
    while (k > s)
      --k;
    s -= k;
    ans.push_back((char)(k + '0'));
    --k;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
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