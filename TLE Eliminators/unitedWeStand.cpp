#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }

        if (mini == maxi)
            cout << -1 << endl;
        else
        {

            vector<int> b;
            vector<int> c;
            for (int i = 0; i < n; i++)
            {

                if (nums[i] != mini)
                    c.push_back(nums[i]);
                else
                    b.push_back(nums[i]);
            }

            cout << b.size() << " " << c.size() << endl;

            for (int i = 0; i < b.size(); i++)
            {

                cout << b[i] << " ";
            }

            cout << endl;

            for (int i = 0; i < c.size(); i++)
            {

                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}