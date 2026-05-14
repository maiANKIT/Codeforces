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

        int countN = 0;

        int count = 0;

        for (int i = 1; i <= n; i++)
        {

            int m = i;

            while (m > 0)
            {

                int y = m % 10;
                m = m / 10;

                if (y != 0)
                    countN++;

                if(countN > 1){
                    break;
                }
                }

            if (countN == 1)
            {
                count++;
            }

            countN = 0;
        }

        cout << count << endl;
    }

    return 0;
}