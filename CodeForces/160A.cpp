#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int array[n];
    
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
        sum += array[i];
    }
    int sumb = 0;
    int k = sizeof(array) / sizeof(array[0]);

    sort(array, array + k);
    
    int count = 0;
    for(int i = n-1; i >= 0; i--){
        sum -= array[i];
        count++;
        sumb+=array[i];
        if(sum < sumb){
            cout << count;
            break;
        }
    }
}