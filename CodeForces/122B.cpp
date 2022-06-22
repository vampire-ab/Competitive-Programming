#include <bits/stdc++.h>
using namespace std;
#define ll long long;
string n;

void solve()
{
  cin >> n;
  int ans4 = 0, ans7 = 0;
  for (int i = 0; i < n.size(); i++)
  {
    if (n[i] == '4')
    {
      ++ans4;      
    }
    if (n[i] == '7')
    {
      ++ans7;
    }
  }
  if(ans4 == ans7 && ans7 == 0){
    cout << -1 << endl;
  }
  else if(ans4 >= ans7){
    cout << 4 << endl;
  }
  else{
    cout << 7 << endl;
  }
}

int main()
{
  solve();
}