#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  string s;
  cin >> s;
  int a[8] = {};
  for (int i = 0; i < n; ++i)
  {
    if (s[i] > '1')
    {
      int p = s[i] - '0';
      if(p == 4){
        a[2]+=2;
        ++a[3];
      }
      else if(p == 6){
        ++a[5];        
        ++a[3];
      }
      else if(p == 8){
        ++a[7];
        a[2]+=3;
      }
      else if(p == 9){
        ++a[7];
        a[2]++;
        a[3]+=2;
      }
      else{
        ++a[p];
      }
    }
  }
  string ans = "";

  for (int i = 7; i >= 2; --i)
  {
    if (i == 6 || i == 4)
      continue;
    while (a[i] > 0)
    {
      ans += to_string(i);
      --a[i];
    }
  }
  cout << ans << endl;
}

int main()
{
  solve();
}