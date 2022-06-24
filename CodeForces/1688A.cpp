#include <bits/stdc++.h>
using namespace std;
#define ll long long;

long long int solve(long long int n)
{
    if (n == 1)
    {
        return 3;
    }
    if((n&(n-1)) == 0)
        return (n+1);

    if(n&1){
        return 1;
    }
    int ctr = 0;
    while(true){
        
        if (n & 1)
        {
            break;
        }
        ctr++;
        n = n >> 1;
    }
    return pow(2, ctr);
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