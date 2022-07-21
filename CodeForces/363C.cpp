#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{

  string s;
  cin >> s;
  int n = s.size();
  string ans = "";
  int ctr = 0;
  for (int i = 0; i < n; ++i)
  {
    if (i >= 2)
    {
      if (s[i] == ans[ctr - 1] && s[i] == ans[ctr - 2])
        continue;
      if (ctr > 2 && s[i] == ans[ctr - 1] && ans[ctr - 2] == ans[ctr - 3])
        continue;
    }
    ++ctr;
    ans.push_back(s[i]);
  }
  cout << ans << endl;
}