#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < n; ++i)
  {
    if (s[i] == 'A')
      ans.push_back('T');
    else if (s[i] == 'T')
      ans.push_back('A');
    else if (s[i] == 'C')
      ans.push_back('G');
    else if (s[i] == 'G')
      ans.push_back('C');
  }
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