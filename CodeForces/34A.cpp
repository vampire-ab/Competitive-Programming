#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = INT_MAX;
    int k, j;
    for(int i = 0; i < n; i++){
        if(ans > abs(a[i] - a[(i+1)%n])){
          ans = abs(a[i] - a[(i+1)%n]);
          k = i;
          j = (i+1)%n;
        }
    }
    cout << k+1 << " "<< j+1 << endl;
}