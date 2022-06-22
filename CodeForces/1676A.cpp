#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int sum  = 0;
    for(int i = 0; i < 6; i++){
        if(i < 3){
            sum += s[i];
        }
        else{
            sum -= s[i];
        }
    }
    if(sum == 0)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int x;
        // string s;
        // cin >> x;
        solve();
        // cout<<ans<<"\n";
    }
}