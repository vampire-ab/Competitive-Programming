#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int a[n];
  set<int> s;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    if(a[i] <= n){
      s.insert(a[i]);
    }
  }  
  cout << n-s.size() << endl;
}

int main()
{
  solve();
}