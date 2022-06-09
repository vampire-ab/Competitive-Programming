#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int flag = 1, n = s.length();
    if (n != t.length())
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[n - 1 - i])
                flag = 0;
        }
        if (flag == 0)
            cout << "NO";
        else
        {
            cout << "YES";
        }
    }
}
