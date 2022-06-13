#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void binary(long long int n)
{
    long long int count = 0;
    while(n != 0){
        if(n%2 != 0)
            count++;
        n = n/2;
    }
    cout << count;
}
int main() 
{
        long long int n;
        cin>>n;
        
        binary(n);
}