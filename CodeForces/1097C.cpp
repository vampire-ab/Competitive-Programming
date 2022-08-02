#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  unordered_map<int, int> mp;
  int ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    int total = 0;
    for (int i = 0; i < s.size(); ++i)
      total += s[i] == '(' ? 1 : -1;

    bool good = true;
    int num = 0;
    if(total > 0)
      total = 0;
    
    for (int i = 0; i < s.size(); ++i)
    {
      num += (s[i] == '(' ? +1 : -1);
      if (num < total)
        break;
    }
    if (num < total)
      continue;
    if (mp[-num] > 0)
    {
      mp[-num]--;
      ans++;
    }
    else
      mp[num]++;
  }
  cout << ans << endl;
}

int main()
{
  solve();
}