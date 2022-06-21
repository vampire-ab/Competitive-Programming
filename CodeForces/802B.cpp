#include <bits/stdc++.h>
using namespace std;

int n;

void solve()
{
  cin >> n;
  string s;
  cin >> s;
  string ans = "";
  if (s[0] != '9')
  {
    for(int i = n-1; i >= 0; --i){
      ans.push_back((char)('9' - s[i] + '0'));
    }
  }
  else
  {
    int a = 1;
    int i = n - 1;
    while(s[i] == '0' || s[i] == '1'){
      if(s[i] == '1'){
        ans.push_back('0');
      }
      else{
        ans.push_back('1');
      }
      --i;
    }
    for (i; i >= 0; --i)
    {
      if (s[i] == '1' && a == 0)
      {
        ans.push_back('9');
        a = 0;
      }
      else if(s[i] == '1' && a == 1){
        ans.push_back('0');
        a = 1;
      }
      else if (s[i] == '0' && a == 0)
      {
        ans.push_back('0');
        a = 1;
      }
      else if (s[i] == '0' && a == 1)
      {
        ans.push_back('1');
        a = 1;
      }
      else
      {
        ans.push_back((char)(10 - s[i] + '0' + a + '0'));
        a = 0;
      }
    }
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