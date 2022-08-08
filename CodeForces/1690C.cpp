#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve(int n)
{
    int s[n];
    int f[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int t = f[0] - s[0];
    cout << t << " ";
    long long int ans = 0;
    
    for(int i = 1; i < n; i++){
        ans = max(f[i-1], s[i]);
        cout << f[i] - ans << " ";
    }
    cout << endl;
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
        // cout << ans << endl;
    }
}