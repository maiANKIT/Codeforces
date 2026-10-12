#include <bits/stdc++.h>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
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

        long long x = n / 2;
        long long y = n / 2;

        if (n % 2 != 0)
        {
            x = (n + 1) / 2;
            y = n / 2;
        }

        long long LCM = (1LL * x * y) / gcd(x, y);

        long long LCM1 = (1LL * x * y) / gcd(x, y);

        long long ans1 = x, ans2 = y;

        while (x < n)
        {

            LCM1 = (x * y) / (gcd(x, y));

            if (LCM1 < LCM)
            {
                LCM = LCM1;
                ans1 = x, ans2 = y;
            }

            x++;
            y--;
        }

        cout << ans2 << " " << ans1 << endl;
    }

    return 0;
}