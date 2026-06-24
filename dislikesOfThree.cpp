#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int count = 1;

        int a = 1;

        while (count <= n)
        {
            string x = to_string(a);
            if (a % 3 == 0 || x[x.size() - 1] == '3')
            {
                a++;
            }
            else
            {
                count++;
                a++;
            }
        }
        cout << a-1 << endl;
    }

    return 0;
}