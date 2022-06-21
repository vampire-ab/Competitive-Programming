#include <bits/stdc++.h>
using namespace std;
#define ll long long;
string n;

void solve()
{
  cin >> n;
  long long int num = 0;
  int ctr = 0;
  while(n.size() != 1){
    ++ctr;
    for(long long int i = 0; i < n.size(); i++){
      num += (n[i] - '0');
    }
    n = to_string(num);
    num = 0;
  }
  cout << ctr << endl;
}

int main()
{

  solve();
}