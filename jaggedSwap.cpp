#include <iostream>
#include <vector>
#include <algorithm>

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

        bool x = 0;

        if (is_sorted(nums.begin(), nums.end()))
        {
            x = 1;
            break;
        }
        else
        {

            for (int i = 1; i < nums.size() - 1; i++)
            {

                if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                {
                    swap(nums[i], nums[i + 1]);
                }

                if (is_sorted(nums.begin(), nums.end()))
                {
                    x = 1;
                    break;
                }
            }
        }

        if (x == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}