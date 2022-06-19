#include <bits/stdc++.h>
using namespace std;

int main()
{
  char s[100];
  string ans = "NO";
  scanf("%[^\n]", s);
  int n = strlen(s);
  n = n-2;

  while (s[n] == ' ')
    n--;

  if (s[n] >= 'A' && s[n] <= 'Z')
  {
    s[n] = (char)(s[n] + 32);
  }
  if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'y')
  {
    ans = "YES";
  }

  cout << ans << endl;
}