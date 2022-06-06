#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[3] = {};
    int temp;
    int ctr = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 4){
            ctr++;
        }
        else
            a[temp - 1]++;
    }
        int mini = min(a[0], a[2]);
        a[0] -= mini;
        a[2] -= mini;
        ctr += mini;
        ctr += a[1]/2;
        if(a[1]%2 != 0){
            if(a[0] <= 2){
                a[0] = 0;
                ctr++;
            }
            else{
                a[0] = a[0] - 2;
                ctr++;
            }
        }
    ctr += (a[0]+3)/4;
    ctr+= a[2];
    cout << ctr << endl;
}