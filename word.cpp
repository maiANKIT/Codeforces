#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int countL = 0;
    int countU = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countU++;
        }
        else
        {
            countL++;
        }
    }

    if (countL >= countU)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }

    cout << s;

    return 0;
}