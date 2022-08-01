#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  long long int a[n];
  unordered_map<int, int> mp;
  unordered_set <int> s;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    ++mp[a[i]];
  }
  int ctr = 1;
  for(int i = 0; i < 32; ctr*=2, ++i)
    s.insert(ctr);
  
  int res = 0;
  for(int i = 0; i < n; ++i){
    int ok = 1;
    for(auto itr = s.begin(); itr != s.end(); ++itr){
      
      int temp = (*itr) - a[i];
      if((temp == a[i] && mp[temp] > 1) || (temp != a[i] && mp[temp] > 0)){
        ok = 0;
        break;
      }
    }
    res += ok;
  }

  cout << res << endl;
}

int main()
{

  solve();
}