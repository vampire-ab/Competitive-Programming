#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool isPrime(long long int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
        
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long int temp;
        cin >> temp;

        if((sqrtl(temp) != floor(sqrtl(temp)))){
            cout << "NO" << endl;
        }
        else{
            if(isPrime(sqrt(temp)))
                cout << "YES" << endl;
            
            else
                cout << "NO" << endl;
        }
        
    }
}