#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;

    while (t > 0)
    {
        string a;
        cin >> a;

        int arr[3] = {0, 0, 0};
        int flag = 1;
        for (int i = 0; i < 6; i++)
        {
            char temp = a.at(i);

            if (temp == 'r')
            {
                arr[0]++;
            }
            else if (temp == 'g')
            {
                arr[1]++;
            }
            else if (temp == 'b')
            {
                arr[2]++;
            }

            if (temp == 'R' || temp == 'G' || temp == 'B')
            {
                if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
                {
                    flag = 0;
                    cout << "NO" << endl;
                    break;
                }
                if (temp == 'R')
                {
                    if (arr[0] == 0)
                    {
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    }
                }
                else if (temp == 'G')
                {
                    if (arr[1] == 0)
                    {
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    if (arr[2] == 0)
                    {
                        cout << "NO" << endl;
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        t--;
    }
    return 0;
}