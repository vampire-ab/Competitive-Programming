#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int solve(int a[], int sum)
{
    int t[4][sum + 1];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (j == 0)
            {
                t[i][j] = 0;
            }
            if (i == 0)
            {
                t[i][j] = -1;
            }
            if (i > 0 && j > 0)
            {
                if (j >= a[i - 1])
                {
                    t[i][j] = max(t[i][j - a[i - 1]] + 1, t[i - 1][j]);
                    if (t[i][j] == 0)
                    {
                        t[i][j] = -1;
                    }
                }
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
    }
    return t[3][sum];
}

int main()
{

    int a[3];
    int sum;
    cin >> sum;
    cin >> a[0] >> a[1] >> a[2];
    cout << solve(a, sum) << endl;
}
