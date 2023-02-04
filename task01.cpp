#include <iostream>
using namespace std;

main()
{
    string fruit_name;
    int quantity;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    cout << "Enter the name of fruit:";
    cin >> fruit_name;
    int sum = 0;
    cout << "Enter quantity:";
    cin >> quantity;
    for (int i = 0; i < 5; i++)
    {
        if (fruit[i] == fruit_name)
        {
            sum = price[i] * quantity;
        }
    }
    cout << "The total bill is:" << sum << "kg";
}