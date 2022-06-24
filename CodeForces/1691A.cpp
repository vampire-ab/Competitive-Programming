#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    int a[n];
    int e = 0, o = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = a[i]%2;
        if(a[i]){
            o++;
        }
        else{
            e++;
        }
    }
    
    return min(e, o);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}