#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    unsigned long long int n, k;
    cin >> n >> k;
    if (k <= (n+1) / 2)
    {
        cout << 2*(k)-1 << endl;
    }
    else
    {
        cout << 2*(k - (n+1) / 2) << endl;
    }
}
// 499999999998 499999999999