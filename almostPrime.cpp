#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{

    if (n == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i++)
    {

        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    int count1 = 0;

    for (int i = 1; i <= n; i++)
    {

        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                bool x = isPrime(j);
                if (x == 1)
                    count++;
            }
        }
        if (count == 2)
            count1++;
    }

    cout << count1;

    return 0;
}