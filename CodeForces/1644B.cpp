#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

void solve(int n)
{
    int a[n];
    int ctr = 0;
    for(int i = 0; i < n; i++){
        a[i] = n-i;
    }
    if(n == 3){
        cout << "3 2 1" << endl;
        cout << "1 3 2" << endl;
        cout << "3 1 2" << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            for(int j = i; ctr != n; j++){
                if(j == n){
                    j = 0;
                }
                cout << a[j] << " ";
                ctr++;
            }
            ctr = 0;
            cout << endl;
            
        }
    }
    
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
        
    }
}