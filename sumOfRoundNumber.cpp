#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int count = 0;

        string a = to_string(n);

        int size = a.size();

        for (int i = 0; i < a.size(); i++)
            if (a[i] != '0')
                count++;
        cout << count << endl;

        int i = size;
        int place = 1;
        while (n > 0)
        {

            int x = (n % 10) * place;
            i--;
            if (x != 0)
                cout << x << " ";
            n = n /10;
            place = place*10;
        }

        cout << endl;
    }

    return 0;
}