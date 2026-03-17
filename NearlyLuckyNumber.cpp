#include <iostream>

using namespace std;

int main()
{

    long long n;
    cin >> n;

    int x = 0;

    int count = 0;

    while (n > 0)
    {

        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }

        n = n / 10;
    }

    if (count == 0)
    {
        x = 1;
    }
    else
    {
        while (count > 0)
        {

            if (count % 10 != 4 && count % 10 != 7)
            {
                x = 1;
                break;
            }

            count = count / 10;
        }
    }

    if (x == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}