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

        int maxi = 1;

        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n; j++)
            {
                if (i != j)
                {
                    if (__gcd(i, j) > maxi)
                        maxi = __gcd(i, j);
                }
            }
        }

        cout << maxi << endl;
    }

    return 0;
}