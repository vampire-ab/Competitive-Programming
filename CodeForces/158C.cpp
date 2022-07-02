#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  string s;
  map<int, string> mp;
  mp[0] = "/";
  int j = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> s;
    if (s == "pwd")
    {
      string ans = mp[j];
      cout << ans << endl;
    }
    else
    {
      cin >> s;
      string ans;
      int k = 0;
      if (s[0] == '/')
      {
        j = 0;
        ++k;
      }
      
      while(k < s.size())
      {
        ans = mp[j];
        while (k < s.size() && s[k] != '/' && s[k] != '.')
        {
          ans.push_back(s[k]);
          ++k;
        }
        if (s[k] == '.')
        {
          k += 2;
          --j;
        }        
        else
        {
          ans.push_back('/');
          ++j;
          mp[j] = ans;
        }
        ++k;
      }
    }
  }
}

int main()
{
  solve();
}