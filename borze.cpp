#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int count = 0;
    string a = "";

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '.')
        {
            char b = count + '0';
            a = a + b;
            count = 0;
        }
        else
            count++;
    }
    char b = count + '0';
            a = a + b;

    cout << a;

    return 0;
}