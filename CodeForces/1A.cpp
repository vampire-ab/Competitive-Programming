#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int x = a%c;
    if(x){
        x = 1+ a/c;
    }
    else
        x = a/c;
    long long int y = b%c;
    if(y){
        y = 1+ b/c;
    }
    else
         y = b/c;
    cout << x*y << endl;
}