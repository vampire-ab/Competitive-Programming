#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
    int a[n];
    int sum  = INT_MAX;
    long long int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]<sum)
            sum = a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] > sum){
            ans += a[i] - sum;
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
        int x;
        // string s;
        cin >> x;
        solve(x);
        // cout<<ans<<"\n";
    }
}