#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, sum = 0;
    cin >> n;
    int a[3] = {};
    cin >> a[0] >> a[1] >> a[2];
    for(int i =1; i < n; i++){
        int temp;
        cin >> temp;
        a[0] += temp;
        cin >> temp;
        a[1] += temp;
        cin >> temp;
        a[2] += temp;        
    }
    if(a[0] == 0 && a[1] == 0 && a[2] == 0)
        cout << "YES";
    else{
        cout << "NO";
    }
}