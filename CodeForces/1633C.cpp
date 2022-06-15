#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

//   ---------------- 1633 C ------------------   //


void solve(long long int hc, long long int dc, long long int hm, long long int dm, long long int k, long long int w, long long int a)
{
    
    for (int i = 0; i <= k; i++)
    {
        if ((hm/(dc + i * w) + (hm % (dc + i * w) != 0)) <= ((hc + (k - i) * a) / dm + ((hc + (k - i) * a)%dm != 0)))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        long long int k, w, a;
        cin >> k >> w >> a;

        solve(hc, dc, hm, dm, k, w, a);
    }
}