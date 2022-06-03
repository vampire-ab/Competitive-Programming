#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int lower = 0, upper  = 0;
    for(int i =0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        }
        else{
            upper++;
        }
    }
    if(lower >= upper){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s;
}