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

        int y, r;
        cin >> y >> r;

        // if (r >= n || y / 2 >= n)
        // {
        //     cout << r << endl;
        // }
        // else
        // {

            int s = r + y / 2;

            cout<<min(s, n)<<endl;

        // }
    }

    return 0;
}