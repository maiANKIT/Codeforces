#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

bool checkPrime(int a)
{

    if (a < 2)
        return false;
    else if (a == 2)
        return true;

    for (int i = 3; i <= sqrt(a); i = i + 2)
    {

        if (a % i == 0)
            return false;
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    long long a = n+2;
    long long b = 2;

    while ((checkPrime(a) || checkPrime(b)))
    {
        a++;
        b++;
    }

    cout << a << " " << b;

    return 0;
}