#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 1, temp = n;
    while(temp > 0){
        if(temp%10 != 4 && temp%10 != 7){
            flag = 0;
            break;
        }
        flag = 1;
        temp = temp/ 10;
    }
    if(n%4 == 0 || n%7 == 0 || n%47== 0 || n%74 == 0 || n%447 == 0||n%477 == 0||n%747 == 0)
        flag = 1;
    if(flag ==1)
    cout << "YES";
    else{
        cout << "NO";
    }
}