#include <bits/stdc++.h>
using namespace std;
#define ll long long;
string n;

void solve()
{
  cin >> n;
  int m = n.size();
  long long int ctr = 1, ans = 0;
  for(int i = 0; i < m; i++){
    if(n[i] > '1'){
      while(i < m){
        n[i] = '1';
        i++;
      }
    }
  }
  for (int i = m-1; i >= 0; --i)
  {
    if(n[i] >= '1'){
      ans += ctr;
    }
    ctr *= 2;    
  }
  cout << ans << endl;
}

int main()
{

  solve();
}