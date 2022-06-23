#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve(int n)
{
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    // sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        if (sum - a[i] == a[i] * (n - 1))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        solve(n);        
    }
}