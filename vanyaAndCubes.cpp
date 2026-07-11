#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {

         sum = sum + (i * (i + 1)) / 2;
        if (sum > n)
            break;

        count++;
    }

    cout << count;

    return 0;
}