#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0, ans = -1;
        int temp, b[n+1] = {};
        for(int i = 0; i < n; i++){
            cin >> temp;
            b[temp]++;
            if(flag == 1)
                continue;
            if(b[temp]==3){
                flag = 1;
                ans = temp;
            }
        }        
            cout << ans<< endl;
        
    }
}