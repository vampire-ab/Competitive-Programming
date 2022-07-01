#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  string s;
  cin >> s;
  int a = 0, f = 0, k = 0;
  for (int i = 0; i < n; ++i)
  {
    if (s[i] == 'A')
      ++a;
    else if (s[i] == 'F')
      ++f;
    else
      ++k;
  }  
  if(k == 1){
    cout << 1 << endl;
  }
  else{
    if(k > 0){
      cout << 0 << endl;
    }
    else{
      cout << a << endl;
    }
  }
}

int main()
{
  solve();
}