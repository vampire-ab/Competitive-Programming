#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, m;

int main()
{
  cin >> n >> m;
  if (n > m + 1)
  {
    cout << -1 << endl;
  }
  else if (m > 2 * n + 2)
  {
    cout << -1 << endl;
  }
  else
  {
    string ans = "";
    if (n >= m)
    {
      while (m--)
      {
        ans.push_back('0');
        ans.push_back('1');
        --n;
      }
      if(n)
        ans.push_back('0');
    }
    else
    {
      while (n--)
      {
        if (m == n || m == n + 1)
        {
          ans += "10";
          --m;
        }
        else
        {
          ans += "110";
          m -= 2;
        }
      }
      if(m){
        while(m){
          ans.push_back('1');
          --m;
        }
      }
    }
    cout << ans << endl;
  }
}