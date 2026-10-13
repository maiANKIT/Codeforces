#include <bits/stdc++.h>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;

        long long ans1 = 1;

        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans1 = n / i;
                break;
            }
        }

        cout << ans1 << " " << n - ans1 << endl;
    }

    return 0;
}