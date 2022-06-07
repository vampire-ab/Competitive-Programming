#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    int remove = 0;
    char pointer = s[0];
    for(int i = 1; i < n; i++){
        
        if(s[i] == pointer){
            remove++;
        }
        else{
            pointer = s[i];
        }
    }
    cout << remove;
}