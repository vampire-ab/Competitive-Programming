#include <bits/stdc++.h>

using namespace std;

int solve(int n)
{
    vector<int> a;
    int temp, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp != 0)
            a.push_back(temp);
        else
            flag = 1;    
    }
    sort(a.begin(), a.end());
    int ctr = 0;
    int m = a.size();
    if(flag == 1){
        return m;
    }
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        return m;
    }
    return m+1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = solve(x);
        cout << ans << "\n";
    }
}