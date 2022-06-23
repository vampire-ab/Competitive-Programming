#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mini = 10;
        if(n/100 == 0){
            cout << n%10 << endl;
            continue;
        }
        while(n){
            mini = min(mini, n%10);
            n /= 10;
        }
        cout << mini << endl;
    }
}