#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solve(int n)
{
    return pow(2, n)-1;
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