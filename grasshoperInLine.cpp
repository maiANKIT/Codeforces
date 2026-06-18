#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x, k;
        cin >> x >> k;

        if (x % k != 0)
        {
            cout << 1 << endl;
            cout << x << endl;
        }
        else
        {

            int a = x;
            int count = 0;
            int sum = 0;
            vector<int> b;
            while (a != sum)
            {

                if (x % k != 0)
                {

                    while (a - sum >= x)
                    {
                        sum = sum + x;
                        count++;
                        b.push_back(x);
                    }
                }

                x--;
            }

            cout << count << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}