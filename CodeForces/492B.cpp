#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;
void solution(long long int arr[], int n, long long int l){
    long long int var = max(2*arr[0],2*(l-arr[n-1]));
    for(int i=1; i<n; i++){
        var = max(var, arr[i]-arr[i-1]);
    }
    // cout<<((long double)(var))/2.0;
    printf("%0.10Lf", ((long double)(var))/2);

}

int main() 
{
    long long int n, l;
    cin>>n >> l;
    long long int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a + n);
    solution(a, n, l);
}