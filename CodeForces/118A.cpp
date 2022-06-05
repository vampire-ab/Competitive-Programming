#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    string ans;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != 'a' && s.at(i) != 'e' && s.at(i) != 'i' && s.at(i) != 'o' && s.at(i) != 'u' && s.at(i) != 'y'){
            ans += '.';
            ans += s.at(i);
        }
    }
    cout << ans;
}