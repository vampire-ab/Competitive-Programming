#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  vector<int> a;
  vector<int> b;
  vector<int> c(n);

  for(int i = 0; i < n; ++i){
    cin >> c[i];
  }
  sort(c.begin(), c.end());
  int j = 0, k = 1;
  a.push_back(c[0]);
  for(int i = 1; i < n; ++i){
    if(c[i] == c[i-1]){
      if(j > 0 && b[j-1] == c[i]){
        cout << "NO" << endl;
        return;
      }
      b.push_back(c[i]);
      ++j;
    }
    else{
      a.push_back(c[i]);
      ++k;
    }
  }
  cout << "YES" << endl;
  cout << k << endl;
  for(int i = 0; i < k; ++i){
    cout << a[i] << " ";
  }
  cout << endl;
  cout << j << endl;
  for(int i = j-1; i >= 0; --i){
    cout << b[i] << " ";
  }
  cout << endl;
}

int main()
{
    solve();  
}