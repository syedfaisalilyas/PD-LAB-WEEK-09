#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter string:";
    cin >> word;
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    if (count % 2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}