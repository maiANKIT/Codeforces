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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            mp[nums[i]]++;
        }

        int x = 0;
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                x = i.first;
                break;
            }
        }

        int i = 0;
        for (; i < nums.size(); i++)
        {
            if (nums[i] == x)
            {

                break;
            }
        }

        cout << i + 1 << endl;
    }

    return 0;
}