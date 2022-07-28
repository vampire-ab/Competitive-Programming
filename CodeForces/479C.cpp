#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n;

bool sortbyfunc(pair<int, int> &a, pair<int, int> &b)
{
  if(a.first == b.first){
    return a.second < b.second;
  }
  return a.first <= b.first;
}

void solve()
{
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> v[i].first;
    cin >> v[i].second;
  }
  priority_queue<int> pq;

  sort(v.begin(), v.end(), sortbyfunc);  
  pq.push(0);
  for(int i = 0; i < n; ++i){
    if(v[i].second < pq.top()){
      pq.push(v[i].first);
    }
    else{
      pq.push(v[i].second);
    }
  }
  cout << pq.top() << endl;

}

int main()
{
  solve();
}