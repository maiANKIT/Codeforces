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

        vector<long long> nums(n);
        long long count = 0;
        unordered_map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];

            count += mp[nums[i] - i];

            mp[nums[i] - i]++;

        }

        cout << count << endl;
    }

    return 0;
}