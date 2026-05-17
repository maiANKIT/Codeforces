#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;

    vector<long long> nums(n);

    long long m = 0;

    for (long long i = 1; i <= n; i = i + 2)
    {

        nums[m] = i;
        m++;
    }

    for (long long i = 2; i <= n; i = i + 2)
    {

        nums[m] = i;
        m++;
    }

    cout << nums[k - 1];

    return 0;
}