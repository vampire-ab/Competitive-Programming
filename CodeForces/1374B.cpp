#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(long long int n)
{    
    if(n == 1){
        cout << "0\n";
        return;
    }
    long long int ctr = 0;
    while(n > 0){
        if(n%2 != 0){
            n*=2;
            ctr++;
            // cout << ctr << "****\n";
        }
        if(n%6!= 0){
            cout << "-1" << endl;
            return;
        }
        ctr++;
        n = n/6;
        if(n == 1){
            break;
        }
    }
    cout << ctr << endl;

}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        solve(n);
        
    }
}