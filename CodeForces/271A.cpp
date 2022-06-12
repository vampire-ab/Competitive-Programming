#include <bits/stdc++.h>
#include <set>

using namespace std;
int main(){
    int y;
    cin >> y;
    int flag;
    
    
    int ans = y;
    while(true){
        flag = 1;
        ans++;
        int t=ans;
        set<int> s;
        while(t > 0){
            if(s.count(t%10)){
                flag = 0;
                break;
            }
        s.insert(t%10);
        t /= 10;
        }
        if(flag == 1)
            break;
    }
    cout << ans;
}