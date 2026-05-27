#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_map<int, int> mp;

    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    mp[s1]++;
    mp[s2]++;
    mp[s3]++;
    mp[s4]++;

    if (mp.size() == 4)
        cout << 0;
    else if (mp.size() == 1)
        cout << 3;
    else if (mp.size() == 3)
        cout << 1;
    else if (mp.size() == 2)
    {
        cout<<2;
    }

    return 0;
}