#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (a * m < b)
    {
        cout << a * n << endl;
    }
    else
    {
        if (b <= a)
        {
            if (m >= n)
            {
                cout << b << endl;
            }
            else
            {
                if (n % m == 0)
                {
                    cout << (n / m) * b << endl;
                }
                else
                {
                    cout << (n / m + 1) * b << endl;
                }
            }
        }
        else
        {
            if (n > m)
            {
                cout << (n / m) * b + (n % m) * a << endl;
            }
            else
            {
                cout << min(b, a*n) << endl;
            }
        }
    }
}