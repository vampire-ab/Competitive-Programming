#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;


void solve()
{
  cin >> n;
  int a[n][4];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < 4; ++j)
      cin >> a[i][j];
  int ind = 0;
  int price = INT_MAX;
  int flag = 1;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      if(a[i][0] < a[j][0] && a[i][1] < a[j][1] && a[i][2] < a[j][2]){
        flag = 0;
        break;
      }            
    }
    if(flag){
      if(price > a[i][3]){
        ind = i;
        price = a[i][3];
      }
    }
    flag = 1;
  }
  cout << ind+1 << endl;
}

int main()
{
  solve();
}
