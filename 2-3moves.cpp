#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        if (n % 3 == 0)
        {

            cout << n / 3 << endl;
        }
        else
        {

            int count1 = 0;

            int a = n;

            if (n == 1)
                cout << 2 << endl;
            else
            {

                while (n > 0)
                {

                    n = n - 3;
                    count1++;
                }

                if (n == -1)
                    count1 = count1 + 1;
                else if (n == -2)
                    count1 = count1 + 2;

                int count2 = 0;
                while (a > 0)
                {

                    a = a - 2;
                    count2++;
                }

                if (a == -1)
                    count2--;

                cout << min(count1, count2) << endl;
            }
        }
    }

    return 0;
}