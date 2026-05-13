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

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }

        int x = -1;
        for (auto i : mp)
        {

            if (i.second >= 3)
            {
                x = i.first;
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}