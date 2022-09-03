#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  string s;
  cin >> s;
  string t = "Timru";
  if(n != 5){
    cout << "NO" << endl;
    return;
  }
  sort(s.begin(), s.end());
  if(s == t)
    cout << "YES" << endl;
  else{
    cout << "NO" << endl;
  }
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