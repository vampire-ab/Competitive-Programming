#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  vector<pair<int, int>> v, u;
  int flag = 0;
  int p, q;
  for(int i = 0; i < n; ++i){
    cin >> p >> q;
    v.push_back({p, q});
    u.push_back({q, p});
  }
  sort(v.begin(), v.end());
  int maxi[n], q_max = 0;
  maxi[0] = 0;
  q_max = v[0].second;
  for(int i = 1; i < n; ++i){
    if(q_max < v[i].second){
      q_max = v[i].second;
      maxi[i] = i;
    }
    else{
      flag = 1; 
      break;
    }
    
  }

  if(flag){
    cout << "Happy Alex" << endl;
  }
  else{
    cout << "Poor Alex" << endl;
  }
}

int main()
{

    solve();
  
}