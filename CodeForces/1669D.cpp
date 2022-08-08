#include <bits/stdc++.h>

using namespace std;

void solve(int n, string s)
{
    int ctr = 0, r = 0, b = 0, i = 0;
    for (i; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if ((r != 0 && b == 0) || (b != 0 && r == 0))
            {
                cout << "NO" << endl;
                return;
            }
            b = 0;
            r = 0;
        }
        else if (s[i] == 'R')
            r++;
        else
            b++;
    }
    if (i == n)
    {
        if ((r != 0 && b == 0) || (b != 0 && r == 0))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(n, s);
    }
}