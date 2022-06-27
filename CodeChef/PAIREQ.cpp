#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  unordered_map <int, int> mp;
  int temp;
  int maxi = 0;
  for(int i = 0; i < n; ++i){
    cin >> temp;
    ++mp[temp];
    maxi = max(maxi, mp[temp]);
  }
  cout << n-maxi << endl;
}

int main()
{

  int t;
  cin >> t;
  while (t--) 
    solve();
  
}