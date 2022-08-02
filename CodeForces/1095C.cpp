#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n, k;

void solve()
{
  cin >> n >> k;
  if (k > n)
  {
    cout << "NO" << endl;
    return;
  }
  int bits = 0;
  map<int, int> mp;
  int i = 0;
  int p = n;
  while (p)
  {
    if (n & (1 << i))
    {
      ++mp[(1 << i)];
      bits++;
    }   
    p >>= 1; 
    ++i;
  }
  if (k < bits)
  {
    cout << "NO" << endl;
    return;
  }
  int num = bits;
  while (k > bits)
  {
    auto itr = mp.end();
    itr--;
    while(itr->second == 0)
    {
      itr--;
    }
    bits++;
    if (itr->second == k)
    {
      break;
    }
    mp[itr->first]--;
    mp[(itr->first) / 2] += 2;
  }
  cout << "YES" << endl;
  for (auto itr = mp.begin(); itr != mp.end(); ++itr)
  {
    while (itr->second > 0)
    {
      cout << itr->first << " ";
      --itr->second;
    }
  }
}

int main()
{
  solve();
}