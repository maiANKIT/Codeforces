#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        n = n - 5;
        sum++;
    }

    if (n != 0)
    {
        sum--;
        n = n + 5;
    }

    if (n - 4 == 0)
        sum++;
    if (n - 3 == 0)
        sum++;
    if (n - 2 == 0)
        sum++;
    if (n - 1 == 0)
        sum++;

    cout << sum;

    return 0;
}