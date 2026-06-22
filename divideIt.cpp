#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;

        int count = 0;

        bool x = 0;

        while (n != 1 && n != 0)
        {

            if (n % 5 == 0)
            {
                n = (4 * n) / 5;
            }
            else if (n % 3 == 0)
            {
                n = (2 * n) / 3;
            }
            else if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                x = 1;
                break;
            }

            count++;
        }

        if (x == 1)
            cout << -1 << endl;
        else
            cout << count << endl;
    }

    return 0;
}