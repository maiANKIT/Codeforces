#include <bits/stdc++.h>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;

        long long s = 0;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                s = i;
                break;
            }
        }

        if (s == 0)
            cout << 1 << " " << n - 1 << endl;
        else
        {
            cout << n / s << " " << n - n / s << endl;
        }
    }

    return 0;
}