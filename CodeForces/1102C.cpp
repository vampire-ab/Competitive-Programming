#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int x, y;  
  cin >> x >> y;
  int ctr = 0, temp;
  for(int i = 0; i <n; i++){
    cin >> temp;
    if(temp <= x)
      ++ctr;
  }
  if(x > y)
    cout << n << endl;
  else
    cout << (ctr+1)/2 << endl;
}

int main()
{
  solve();
}