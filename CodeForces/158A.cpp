#include <iostream>
 
using namespace std;
 
int main(){
    int n, k, count = 0;
    cin >> n >> k;
    int temp;
    int a[n+1];
    
    for(int i = 1; i < n+1; i++){
        cin >> a[i];
    }
    temp = a[k];
    for(int i = 1; i < n+1; i++){
        if(a[i] >= temp && a[i] > 0)
            count++;
    }
    cout << count;
}