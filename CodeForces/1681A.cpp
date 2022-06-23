#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve(int n)
{
    int a[n], maxa = 0 ;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > maxa)
            maxa = a[i];
    }
    int m;
    cin >> m;
    int b[m], maxb = 0;
    for(int i = 0; i < m; i++){
        cin >> b[i];  
        if(b[i] > maxb)
            maxb = b[i];      
    }
    cout << (maxa >= maxb ? "Alice" : "Bob");
    cout << endl;
	cout << (maxb >= maxa ? "Bob" : "Alice");
    cout << endl;

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