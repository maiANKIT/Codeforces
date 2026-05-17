#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long a;
        cin >> a;

        bool x = 0;

        for (long long i = 3; i <= a; i = i + 2)
        {
            if (a % i == 0)
            {
                x = 1;
                break;
            }
        }

        if (x == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}