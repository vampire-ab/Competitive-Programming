#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(int n)
{
    long long int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    long long int mina = *min_element(a, a + n);
    long long int minb = *min_element(b, b + n);
    
    long long int sum = 0;
    for(int i = 0; i < n; i++){        
        if(a[i] - mina > b[i] - minb){
            sum += a[i] - mina;
        }
        else{
            sum += b[i] - minb;
        }
    }
    cout << sum << endl;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);

    }
}