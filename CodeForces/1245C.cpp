#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;
const int MAX = 1e9 + 7;
void solve()
{
  cin >> s;
  ll ctr = 0, n = s.size();
  ll first = 1, last = 1;
  ll ans = 1;
  for (int i = 0; i < n;)
  {
    if (s[i] == 'm' || s[i] == 'w')
    {
      cout << 0 << endl;
      return;
    }
    if (s[i] == 'u' || s[i] == 'n')
    {
      while (i < n - 1 && (s[i] == s[i + 1]))
      {
        ++i;
        ctr = ((first) % MAX + (last) % MAX) % MAX;
        first = (last) % MAX;
        last = ctr;
      }
      if (ctr > 0)
      {
        ans = (ans * ctr) % MAX;
        ctr = 0;
        first = 1;
        last = 1;
      }
    }
    ++i;
  }
  cout << ans % MAX << endl;
}
int main()
{
  solve();
}
