#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solve(int n)
{
    int temp, sum = 0, ctr = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(i%2 == 0 && temp%2!=0){
            sum++;
            ctr++;
        }
        else if(i%2 != 0 && temp%2 == 0){
            sum--;
        }
    }
    if(sum == 0){
        return ctr;
    }
    else{
        return -1;
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
        int ans = solve(n);
        cout<<ans<<"\n";
    }
}