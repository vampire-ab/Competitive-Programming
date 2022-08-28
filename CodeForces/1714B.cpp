#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

bool sortbydesc(const pair<int, int> &a, const pair<int, int> &b){
  if(a.first == b.first)
    return a.second > b.second;
  return a.first < b.first;
}

void solve()
{
  cin >> n;
  int ans = 0;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; ++i){
    cin >> v[i].first;
    v[i].second = i+1;    
  }
  sort(v.begin(), v.end(), sortbydesc);
  
  for(int i = 1; i < n;){
    if(v[i].first == v[i-1].first){
      ans = max(ans, v[i].second);
      ++i;
      while(i < n && v[i].first == v[i-1].first)
        ++i;
    }
    else{
      ++i;
    }
  }
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