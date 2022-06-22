#include <bits/stdc++.h>

using namespace std;

void solve(long long int n)
{
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    if (n % 2)
    {
        cout << -1 << endl;
        return;
    }
    long long int a = 0, b = 0;
    a += n/4;
    b += n/6;
    if(n%6){
        b++;
    }
    // b = max(a, b);
    cout << b << " " << a << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        solve(x);
        
    }
}