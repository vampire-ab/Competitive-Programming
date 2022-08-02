#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<int> ans(n);
  for (int i = 0; i < n; ++i)
  {
    if(i&1){
      ans[n-i/2-1] = a[i];
    }
    else{
      ans[i/2] = a[i]; 
    }
  }
  for(int i = 0; i < n; ++i)
    cout << ans[i] << " ";
  cout << endl;
  
}

int main()
{

  solve();
}