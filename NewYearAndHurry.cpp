#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int diff = 240 - k;

    int i = 1;
    int count = 0;
    int x = 0;

    while (diff >= x)
    {
        count++;
        x = x + 5 * i;
        i++;
        if(count>=n) break;
    }

    
    if (x > diff)
        cout << count - 1;
    else
        cout << count;

    return 0;
}