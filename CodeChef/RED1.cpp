#include <bits/stdc++.h>

using namespace std;

int solve()
{
    long long int n, p;
    cin >> n;
    p = n;
    if(n == 1)
        return 0;
        
    if(n%2 == 1)
        return 1;
    
    
    int ctr = 0;
    while(n!=1){
        if(n%2 == 0){
            n = n/2;
            ctr++;
        }
        else 
            break;
    }
  
    if(ctr%2)
        return -1;
    
  
    long long int temp = sqrt(p);
    long long int ans = temp*temp;
  
    if(ans == p){
        return 1;
    }
    return 2;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans = solve();
        cout<<ans<<"\n";
    }
}
