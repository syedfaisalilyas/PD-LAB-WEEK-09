#include <iostream>
using namespace std;

int main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;

    cout << "Enter your 4-digit PIN: ";
    cin >> pin;

    if (pin.length() != 4)
    {
        cout << "Invalid input." << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (!isdigit(pin[j]))
            {
                cout << "Invalid input." << endl;
                break;
            }
        }
        int moveIndex = (pin[i] - '0' + i) % 10;
        cout << moves[moveIndex] << endl;
    }

    return 0;
}