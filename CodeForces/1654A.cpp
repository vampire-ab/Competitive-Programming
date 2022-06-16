#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

long long int solve(int n)
{
    long int a[n];
    long int max = 0, store = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    return a[0] +a[1];
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int ans = solve(n);
        cout<<ans<<"\n";
    }
}