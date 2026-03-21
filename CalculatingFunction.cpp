#include <iostream>

using namespace std;

int main()
{

    long long n;
    cin >> n;

    long long sum = 0;

    long long k = 1;
    for (long long i = 0; i < n; i++)
    {

        if (k % 2 == 0)
            sum = sum + k;
        else
            sum = sum - k;

        k++;
    }

    cout <<sum;

    return 0;
}