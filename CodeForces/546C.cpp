#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  unordered_map<string, string> mp;
  cin >> n;
  int a[n];
  int k1, k2;
  cin >> k1;
  int p = k1, q = k2;
  int ctr = 0;
  queue<int> one, two;
  string s1 = "", s2 = "";
  int t;
  for (int i = 0; i < k1; ++i)
  {
    cin >> t;
    one.push(t);
    s1.push_back(t + '0');
  }
  cin >> k2;
  for (int i = 0; i < k2; ++i)
  {
    cin >> t;
    two.push(t);
    s2.push_back(t + '0');
  }
  mp[s1] = s2;
  int ans = 0;
  int winner = -1;
  while (!one.empty() && !two.empty())
  {
    ++ans;
    int j = one.front(), k = two.front();
    if (j > k)
    {
      two.pop();
      one.push(k);
      one.push(j);
      one.pop();
      s1.erase(0, 1);
      s2.erase(0, 1);
      s1.push_back(k + '0');
      s1.push_back(j + '0');
    }
    else
    {
      one.pop();
      two.push(j);
      two.push(k);
      two.pop();
      s1.erase(0, 1);
      s2.erase(0, 1);
      s2.push_back(j + '0');
      s2.push_back(k + '0');
    }

    if (one.empty())
    {
      winner = 2;
      break;
    }
    if (two.empty())
    {
      winner = 1;
      break;
    }

    if (mp[s1] == s2)
    {      
      winner = -1;
      break;
    }
    mp[s1] = s2;
  }
  if (winner == -1)
    cout << -1 << endl;
  else
    cout << ans << " " << winner << endl;
}

int main()
{
  solve();
}