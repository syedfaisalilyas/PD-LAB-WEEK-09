#include <iostream>
using namespace std;

main()
{
    string movie;
    float discount;
    string movies[5] = {"Gladiators", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter a movie:";
    cin >> movie;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            discount = (10 * 500) / 100;
        }
        else
        {
            discount = (5 * 500) / 100;
        }
    }
    discount = 500 - discount;
    cout << "Discounted price is:" << discount;
}