#include <bits/stdc++.h>
using namespace std;
int n;

void solve()
{
  cin >> n;
  int k;
  cin >> k;
  
  string s;
  cin >> s;

  if(n == k){
    cout << "" << endl;
    return;
  }

  int a[26] = {};
  for(int i = 0; i < n; ++i)
    ++a[s[i] - 'a'];  

  int i = 0;
  while(k > 0){
    k -= a[i];
    ++i;
  }
  --i;
  k = -k;
  string ans = "";

  for(int j = 0; j < n; ++j){

    if((s[j]-'a') > i)
      ans.push_back(s[j]);
    
    else if((s[j]-'a') == i){
      if(a[s[j]-'a'] <= k)       
        ans.push_back(s[j]);        
      
      --a[s[j]-'a'];
    }
  }
  cout << ans << endl;
}

int main()
{
  solve();
}