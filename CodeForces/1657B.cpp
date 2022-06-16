#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, y, B, x;
        cin>>n>>B>>x>>y;
        
        long long int sum = 0;
        int a[n+1] = {};

        for(int i = 1; i <= n; i++){
            if(a[i-1]+x <= B){
                a[i] = a[i-1] + x;
            }
            else{
                a[i] = a[i-1] -y;
            }
            
        }
        for(int i = 0; i <= n; i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
}