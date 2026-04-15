#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        int x = 0;
        int y = 0;

        if (a % b != 0)
        {
            y = a / b;
            cout << b * (y + 1) - a << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}