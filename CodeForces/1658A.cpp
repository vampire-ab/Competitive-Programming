#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

void solve(int n, string s)
{

    int ans = 0;
    // int m = 0, f = 0;
    // int ctr = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (s[i + 1] == '0' && i < n-1)
            {
                ans+=2;
            }
            else if(s[i+2] == '0' && i < n-2){
                ans+=1;
            } 
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        solve(n, s);
    }
}