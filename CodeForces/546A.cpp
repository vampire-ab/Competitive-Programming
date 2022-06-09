#include <bits/stdc++.h>

using namespace std;

int main(){
    long int k, n, w;
    cin >> k>> n>>w;
    long int result = k*(w)*(w+1)/2;
    result = result - n;
    if(result >= 0)
    cout << result;
    else
    cout << "0";
}
