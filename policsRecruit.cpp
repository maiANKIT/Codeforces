#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;
    int count = 0;

    while (n--)
    {

        int a;
        cin >> a;

        if (a == -1 && sum == 0)
        {
            count++;
        }
        else if (a == -1 && sum != 0)
        {
            sum--;
        }
        else
            sum = sum + a;
    }

    cout << count;

    return 0;
}