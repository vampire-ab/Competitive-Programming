#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

void solve(int n)
{
    int temp, flag = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 1)
            flag = 1;
    }
    if(flag == 1)
        cout << "HARD\n";
    else
    cout << "EASY\n";
}
int main() 
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        cin>>n;
        solve(n);
        // cout<<ans<<"\n";
    // }
}