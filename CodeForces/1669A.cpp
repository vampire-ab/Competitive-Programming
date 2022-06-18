#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << "Division ";
        if(n <= 1399){
            cout << 4 << endl;
        }
        else if(n <= 1599){
            cout << 3 << endl;
        }
        else if(n <= 1899){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}