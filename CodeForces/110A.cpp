#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;
    int flag = 1;
    
    while(n>0){
        if(n%10 == 4 || n%10 == 7){
            count++;
        }
        n=n/10;
    }
    if(count == 0)
        flag = 0;
    while(count > 0){
        if(count%10 != 4 && count%10 != 7)
            flag = 0;
        count = count/10;
    }
    
    
    if(flag == 1)
        cout << "YES";
    else
        cout << "NO";
}