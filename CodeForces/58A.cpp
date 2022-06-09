#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> stac;
    stac.push('o');
    stac.push('l');
    stac.push('l');
    stac.push('e');
    stac.push('h');

    for (int i = 0; i < s.length(); i++)
    {
        if(stac.empty()){
            break;
        }
        if (s[i] == stac.top())
            stac.pop();
    }

    if (stac.empty())
        cout << "YES";
    else
        cout << "NO";
}
