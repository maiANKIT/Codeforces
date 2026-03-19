#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char prevColor = '\0';
    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;
        char c = row[0];
        for (char ch : row)
        {
            if (ch != c)
            {
                cout << "NO\n";
                return 0;
            }
        }
        if (prevColor != '\0' && c == prevColor)
        {
            cout << "NO\n";
            return 0;
        }
        prevColor = c;
    }

    cout << "YES\n";
    return 0;
}