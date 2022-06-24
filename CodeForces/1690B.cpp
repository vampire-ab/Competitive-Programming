#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve(int n)
{
    int a[n];
    int b[n];
    int c[n];
    int flag = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = INT_MAX, maxiii = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        c[i] = a[i] - b[i];
        if(c[i] < 0)
            flag = 1;
        if(b[i]){
            maxi = min(maxi, c[i]);
        }
        else{
            maxiii = max(maxiii, c[i]);
        }        
    }

    if(flag){
        cout << "NO" << endl;
        return;
    }
    int ans = max(maxi, maxiii);
    for(int i = 0; i < n; i++){
        if((b[i]) && (c[i] != ans)){
            cout << "NO" << endl;
            return;
        }
    }


    
    cout << "YES" << endl;


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