

#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int n, k;

void solve()
{
  freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  cin >> n >> k;
  int a[n];
  int b[n];
  int ctr = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b, b + n);
  int temp = b[n - k];
  int j = n - k;
  while (j < n && b[j] == temp)
  {
    ++ctr;
    ++j;
  }
  cout << temp << endl;
  for (int i = 0; i < n; ++i)
  {
    if (a[i] > temp)
    {
      cout << i + 1 << " ";
    }
    else if (ctr && (a[i] == temp))
    {
      cout << i + 1 << " ";
      --ctr;
    }
  }
  cout << endl;
}

int main()
{
  solve();
}