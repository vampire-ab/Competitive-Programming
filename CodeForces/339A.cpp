#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    string ans;
    int n = s.length();
    int count1 = 0, count2 = 0, count3 = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '1')
        	count1++;
        else if(s[i] == '2')
        	count2++;
        else if(s[i] == '3')
        	count3++;
    }
    for(int i = 0; i < n; i++){
        if(i%2 != 0)
            ans += '+';        
        else if(count1 > 0){
            ans += '1';
			count1--;
			}
        else if(count2 > 0){
            ans += '2';
			count2--;
			}
        else if(count3 > 0){
            ans += '3';
			count3--;
			}  
    }
    cout << ans;
}