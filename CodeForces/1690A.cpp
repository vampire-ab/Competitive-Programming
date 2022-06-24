#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve(int n)
{
    int t = n%3;
    if(t){
        if(n/3 + t - 3 != 0)
        cout << n/3+1 << " " << n/3+2 << " " << n/3 + t - 3<<endl;
        else{
            cout << n/3 << " " << n/3+2 << " " << n/3 + t - 3+1<<endl;
        }
    }
    else{
        cout << n/3 << " " << n/3+1 << " " << n/3-1 << endl;
    }
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