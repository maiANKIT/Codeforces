#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 0;

    if (a ^ b != 0 || a ^ c != 0 || a ^ d != 0)
        count++;
    if (b ^ c != 0 || b ^ d != 0)
        count++;
    if (c ^ d != 0)
        count++;

    cout << count;

    return 0;
}