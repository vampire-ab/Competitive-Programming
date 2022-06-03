#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string str;
        cin >> str;
 
        int n = str.length() - 2;
        if (n + 2 > 10)
            cout << str.at(0) << n << str.at(n + 1) << endl;
        else
            cout << str << endl;
        t--;
    }
}