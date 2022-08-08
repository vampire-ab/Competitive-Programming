#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m)
{
    int mini = INT_MAX;
    string s[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for(int k = 0; k < m; k++){
                temp = abs(s[i][k] - s[j][k]);                
                flag += temp;
                
            }
            if(flag < mini){
                mini = flag;
            }
            flag = 0;
        }
    }
    cout << mini << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        // string s;
        cin >> x >> y;
        solve(x, y);
        // cout<<ans<<"\n";
    }
}