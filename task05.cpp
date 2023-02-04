#include <iostream>
using namespace std;

main()
{
    string arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter elements" << i + 1 << ":";
        cin >> arr[i];
    }
    if (arr[1] == arr[0] && arr[1] == arr[2] && arr[1] == arr[3])
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}