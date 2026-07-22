#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;

        int price = 0;

        if (n % 2 == 0)
        {
            price += (n/2) * min((2 * a), b);
        }
        else{
            price += ((n - 1)/2) * min(2 * a, b);
            price += a;
        }
        cout<<price<<endl;
    }

    return 0;
}