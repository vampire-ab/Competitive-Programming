#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int time = 0;
    long long int now, last = 1;
    for (long long int i = 0; i < m; i++)
    {
        cin >> now;

        if (now >= last)
        {
            time += now - last;
        }
        else
        {
            time += n - last + now;
        }
        last = now;
    }
    cout << time;
}