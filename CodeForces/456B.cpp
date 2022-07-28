#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;

void solve()
{
  cin >> s;
  int p = 1;
  int q = s.size();

  int n = (s[q - 1] - '0');

  if (s.size() > 1)
    n += 10 * (s[q - 2] - '0');

  if (n == 0)
  {
    cout << 4 << endl;
    return;
  }
  int k = n % 4, l = n % 2;
  if (k == 0)
    p += 7;
  else if (k == 1)
    p += 5;
  else if (k == 2)
    p += 3;
  else
    p += 5;

  if (l)
    p += 4;
  else
    p += 6;

  cout << p % 5 << endl;
}

int main()
{
  solve();
}