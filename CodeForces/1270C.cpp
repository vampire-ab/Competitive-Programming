#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  ll temp;
  ll sum = 0, xor_ = 0;

  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    sum += temp;
    xor_ ^= temp;
  }  
  cout << 2 << endl;
  cout << sum << " " << sum+xor_ << endl;

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