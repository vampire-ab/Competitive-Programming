#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
  cin >> n;
  int k;
  cin >> k;
  priority_queue<int> pq;
  ll sum = 0;
  int temp, last;
  cin >> last;
  for (int i = 0; i < n-1; ++i)
  {
    cin >> temp;
    sum += (temp - last);
    pq.push(temp - last);
    last = temp;    
  }
  while (k>1)
  {
    sum -= pq.top();
    pq.pop();
    k--;
  }
  cout << sum << endl;
}

int main()
{
  solve();
}
