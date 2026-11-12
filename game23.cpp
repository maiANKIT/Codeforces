#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, m;
    cin >> n >> m;

    if (n > m)
    {
        cout << -1;
    }
    else if (n == m)
        cout << 0;
    else
    {

        int c2 = 0, c3 = 0;

        bool ans = 0;

        while (n > 1)
        {

            if (n % 2 == 0)
            {
                c2++;
                n /= 2;
            }
            else if (n % 3 == 0)
            {
                c3++;
                n /= 3;
            }
            else
            {
                // ans = 1;
                break;
            }
        }

        int a2 = 0, a3 = 0;
        bool ans2 = 0;

        while (m > 1)
        {
            if (m % 2 == 0)
            {
                a2++;
                m /= 2;
            }
            else if (m % 3 == 0)
            {
                a3++;
                m /= 3;
            }
            else
            {
                // ans2 = 1;
                break;
            }
        }

        int t2 = a2 - c2;
        int t3 = a3 - c3;

        if (n != m || t2 < 0 || t3 < 0)
            cout << -1;
        else
            cout << t2 + t3;
    }

    return 0;
}