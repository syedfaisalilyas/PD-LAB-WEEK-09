#include <iostream>
using namespace std;

main()
{
    int num;
    int switching_time = -1, coloring_time = 0;
    int time;
    cout << "Enter number of colors:";
    cin >> num;
    string colors[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter color" << i + 1 << ":";
        cin >> colors[i];

        coloring_time += 2;
    }
    for (int i = 0; i < num; i++)
    {
        if (colors[i] != colors[i + 1])
        {
            switching_time++;
        }
    }

    time = switching_time + coloring_time;
    cout << time;
}
