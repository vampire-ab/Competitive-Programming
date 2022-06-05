#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a = 0, inn = 0, now = 0, max = 0;
    for(int i = 0; i < n; i++){
        if(now > max){
            max = now;
        }
        cin >> a;
        cin >> inn;
        now += inn - a;
    }
    cout << max;
}