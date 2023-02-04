#include <iostream>
#include <string>
using namespace std;

main()
{
    string s1, s2;
    int a = 0;
    cout << "Enter string 1:";
    cin >> s1;
    cout << "Enter string 2:";
    cin >> s2;
    int s1l = s1.length(), s2l = s2.length();
    for (int i = 0; i < s1l; i++)
    {
        for (int j = 0; j < s2l; j++)
        {
            if (s1[i] == s2[j])
            {
                a++;
                s2[j] = ' ';
                break;
            }
        }
    }
    cout << "The common characters are:" << a;
}
