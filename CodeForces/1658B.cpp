#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

const long long int mod = 998244353;

long long int solve(long long int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (solve(n - 1) * n)%mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;

        cin >> n;
        if (n % 2 == 0){
            long long int ans = solve(n / 2);
            cout << (ans*ans)%mod << endl;    
        }

        else
        {
            cout << "0" << endl;
        }
    }
}