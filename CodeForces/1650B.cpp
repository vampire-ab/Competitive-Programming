#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(long long int l, long long int r, long long int a)
{
    if (r < a)
    {
        cout << r % a << endl;
    }
    else
    {
        long long int x = r / a, remains = r % a;
        if (remains != (a - 1) && l < x*a)
        {
            cout << x + a - 2 << endl;
        }
        
        else{
            cout << x+remains << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, a;
        cin >> l >> r >> a;
        solve(l, r, a);
    }
}