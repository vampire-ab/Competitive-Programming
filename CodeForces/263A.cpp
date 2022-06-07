#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main(){
    int storei = 0, storej = 0;
    int temp;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> temp;
            if(temp == 1){
                storej = 2 - j;
                storei = 2 - i;
            }
        }
    }
    if(storej < 0){
        storej = abs(storej);
    }
    if(storei < 0){
        storei = abs(storei);
    }
    cout << storej + storei ;
}