#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    int n = s.length();
    if(n == 1){
        cout << "NO" << endl;
        return;
    }
    int ctr = 1;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]){
            if(ctr < 2){
                cout << "NO" << endl;
                return;
            }
            ctr = 0;
        }
        ctr++;
    }
    if(s[n-1] != s[n-2]){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        solve(s);
        
    }
}