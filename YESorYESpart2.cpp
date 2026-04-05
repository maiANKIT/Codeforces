#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "YES" || s == "yES" || s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YeS" || s == "YEs")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}