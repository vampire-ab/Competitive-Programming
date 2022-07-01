#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  int prefix[n];
  prefix[0] = 0;
  int suffix[n];
  suffix[n-1] = 0;
  for(int i = 1; i < n; ++i){
    prefix[i] = prefix[i-1]^a[i-1];   
  }
  for(int i = n-1; i > 0; i--){
    suffix[i-1] = suffix[i]^a[i];        
  }
  for(int i = 0; i < n; ++i){
    if((suffix[i]^prefix[i]) == a[i]){
      cout << a[i] << endl;
      break;
    }
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