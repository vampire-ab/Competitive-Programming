#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            cout << "OK" << endl;
            mp.insert(make_pair(s, 0));
        }
        else
        {
            mp[s]++;
            s += to_string(mp[s]);
            cout << s << endl;
        }
    }
}