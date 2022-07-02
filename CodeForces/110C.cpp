#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int num4 = 0;
  int m = n;
  int num7 = 0;
  while (n >= 0)
  {
    if (n % 7 == 0)
    {
      num7 = n / 7;
      break;
    }
    n -= 4;
    num4++;
  }
  if (n < 0)
  {
    cout << "-1" << endl;
    return;
  }
  string ans = "";
  for (int i = 0; i < num4; ++i)
  {
    ans.push_back('4');
  }
  for (int i = 0; i < num7; ++i)
  {
    ans.push_back('7');
  }
  cout << ans << endl;
}

int main()
{
  solve();
}