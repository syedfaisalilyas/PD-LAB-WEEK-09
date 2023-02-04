#include <iostream>
using namespace std;

main()
{
    int arr[3], n;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter element" << i + 1 << ":";
        cin >> arr[i];
    }
    cout << "Enter the number of times the transformation needs to be done:";
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 3; i++)
            if (arr[i] % 2 == 0)
            {
                arr[i] -= 2;
            }
            else
            {
                arr[i] += 2;
            }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << ",";
    }
}