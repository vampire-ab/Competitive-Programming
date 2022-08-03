#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

void solve()
{
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  sort(a, a + n);

  int i = 0, ctr = 0;
  int ans = 0;

  //Sliding Window

  for (int j = 0; j < n;)
  {
    if((a[j] - a[i]) > 5){  
      --ctr;    
      ++i;
    }
    else{
      ++ctr;
      ++j;
    }
    ans = max(ans, ctr);
  }
  cout << ans << endl;
}

int main()
{
  solve();
}