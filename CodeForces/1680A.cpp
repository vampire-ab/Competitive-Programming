#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1>> l2 >> r2;
    if(l2<= r1 && l2>=l1){
        return l2;
    }
    else if(l1 <= r2 && l1 >= l2){
        return l1;
    }
    return l1+l2;
    
    
    
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