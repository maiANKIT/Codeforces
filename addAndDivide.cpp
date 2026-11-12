#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long a, b;
        cin >> a >> b;

        if (a < b)
            cout << 1 << endl;
        else
        {
            int count = 0;

            if (b == 1)
            {
                count++;
                b++;
            }

            if (a % 2 != 0 && b % 2 != 0)
            {
                b++;
                count++;
            }

            while (a > b)
            {
                count++;
                a /= b;
                
                if(b%2 == 0 && a % 2 == 0){
                    b++;
                    count++;
                }
                else if(b%2 == 0 && a % 2 != 0){
                    b++;
                    count++;
                }
                else if (b % 2 == 0)
                {
                    b++;
                    count++;
                }
                
            }

            if (a == b)
            {
                count += 2;
            }
            else
            {
                count++;
            }

            cout << count << endl;
        }
    }

    return 0;
}