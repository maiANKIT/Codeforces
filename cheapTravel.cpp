#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m * a > b)
    {

        int ans1 = 0, ans2 = 0;

        int count = 0;
        while (count < n - n % m)
        {

            ans1 += b;
            count += m;
        }

        ans2 = ans1 + b;
        ans1 += (n % m) * a;

        cout << min(ans1, ans2);
    }
    else
        cout << a * n;

    return 0;
}