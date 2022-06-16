#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(string s, char inn)
{
    for(int i = 0; i < s.length(); i=i+2){
        if(s[i] == inn){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char inn;
        cin >> inn;
        solve(s, inn);
    }
}