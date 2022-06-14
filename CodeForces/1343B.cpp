#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(int n)
{
    
    if ((n / 2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int a[n];
        cout << "YES" << endl;
        for (int i = 0; i < n/2; i++)
        {
            a[i] = (i+1)*2;
            a[n/2+i] = 2*i+1;
        }
        a[n-1] = 3*n/2 - 1;
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
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
        // cout<<ans<<"\n";
    }
}


//12 

//2 4 6 8 10 12 = 42
//1 3 5 7 9 