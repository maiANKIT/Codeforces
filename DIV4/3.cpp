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

        for (int &i : nums)
        {
            cin >> i;
        }

        sort(nums.begin(), nums.end());

        vector<int> left, mid, right;

        for (int i = 0; i < n; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                left.push_back(nums[i]);
            }
            else if (i == 1 || nums[i] != nums[i - 2]) {
                right.push_back(nums[i]);
            }
            else {
                mid.push_back(nums[i]);
            }
        }

        reverse(right.begin(), right.end());

        cout << left.size() + right.size() << endl;

        for (int i : left) cout << i << " ";
        for (int i : mid) cout << i << " ";
        for (int i : right) cout << i << " ";
        cout << endl;
    }

    return 0;
}