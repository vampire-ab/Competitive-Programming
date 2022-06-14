#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int solve(int n)
{
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);

    int minima = INT_MAX, temp;
    for(int i = 1; i < n; i++){
        temp = abs(a[i] - a[i-1]);
        if(temp < minima){
            minima = temp;        
        }
    }
    return minima;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = solve(n);
        cout<<ans<<"\n";
    }
}