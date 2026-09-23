#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    string l;
    cin >> l;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        int diff = abs(s[i] - l[i]);
        count += min(diff, 10 - diff);
    }

    cout << count;

    return 0;
}