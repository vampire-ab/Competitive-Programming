#include <bits/stdc++.h>
using namespace std;
#define ll long long;

long long int solve(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    long long int j = 0;
    for(int i = 0; i < m; i++){
        cin >> b[i];
        j += b[i];
        j = j%n;
    }
    return a[j];

}

int main()
{

    int t;

    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long int ans = solve(n);
        cout << ans << endl;
    }
}