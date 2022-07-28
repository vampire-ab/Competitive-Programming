#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, s;

void solve()
{
  cin >> n >> s;
  if(s == 0 && n == 1){
    cout << 0 << " " << 0 << endl;
    return;
  }
  if (9 * n < s || s == 0)
  {
    cout << -1 << " " << -1 << endl;
    return;
  }
  int nine = s/9;
  string ans1 = "";            
  int remain = s%9;
  char c = remain;
  int zeroes = n - (nine+(remain+8)/9);

  while(nine--)
    ans1.push_back('9');

  if(remain)
    ans1 += to_string(remain);
    
  for(int i = 0; i < zeroes; ++i)
    ans1.push_back('0');
  
  string ans2 = ans1;
  reverse(ans1.begin(), ans1.end());

  if(zeroes>0){
    ans1[0] = '1';
    --ans1[zeroes];
  }
  cout << ans1 <<" " << ans2 << endl;

}


int main()
{
  solve();
}