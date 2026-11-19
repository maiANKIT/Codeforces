#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        char finalAns = 'B';

        vector<string> arr(8);
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
            if (arr[i] == "RRRRRRRR")
            {
                finalAns = 'R';
            }
        }

        cout << finalAns << endl;
    }

    return 0;
}