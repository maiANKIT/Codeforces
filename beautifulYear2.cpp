#include <bits/stdc++.h>

using namespace std;

int main()
{

    int y;
    cin >> y;

    y = y + 1;

    string x = to_string(y);

    int z = 0;
    while (z < 1)
    {
        if (x[0] != x[1] && x[1] != x[2] && x[2] != x[3] && x[0] != x[2] && x[1] != x[3] && x[0] != x[3])
        {
            z++;
        }
        else
        {
            y++;
            x = to_string(y);
        }
    }

    cout << y;

    return 0;
}