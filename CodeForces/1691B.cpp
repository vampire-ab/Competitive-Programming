#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int a[n];
    int ctr = 1;
    vector<int> v;
    v.push_back(0);
    int j = 0;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];

        if (i > 0 && flag)
        {
            if (a[i] == a[i - 1])
            {
                ctr++;
            }
            else
            {
                if (ctr == 1)
                {
                    flag = 0;
                }
                v.push_back(ctr+v[j]);
                j++;
                
                ctr = 1;
            }
        }
    }
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (a[n - 1] == a[n - 2])
    {
        v.push_back(ctr + v[j]);
    }
    else
    {
        cout << -1 << endl;
        return;
    }

    if (flag == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i < v.size(); i++)
    {
        int temp = v[i];
        while (temp != v[i-1])
        {
            if (v[i] == temp)
                cout << temp << " ";
            else
            {
                cout << v[i] - temp + v[i-1] << " ";
            }
            temp--;
        }
    }
    cout << endl;
    // return ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}