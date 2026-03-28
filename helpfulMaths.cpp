#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    string x = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            continue;
        else if (i < s.size() - 1)
        {
            x = x + s[i] + '+';
        }
        else
        {
            x = x + s[i];
        }
    }

    cout << x;

    return 0;
}