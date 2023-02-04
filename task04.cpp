#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number of arrays:";
    cin >> number;
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter number" << i + 1 << ":";
        cin >> arr[i];
        if (arr[i] == 7)
        {
            cout << "Boom!";
        }
        else
        {
            cout << "There is no 7 in the array";
        }
    }
}