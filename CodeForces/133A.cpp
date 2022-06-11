#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}