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
            cin >> nums[i];

        int count = 0;
        bool x = false;
        bool y = 0;
        if (n > 1)
        {
            while (x == false)
            {

                for (int i = 0; i < n - 1; i++)
                {
                    if (i > 0 && nums[i] == 0)
                    {
                        y = 1;
                        break;
                    }
                    if (nums[i] >= nums[i + 1])
                    {
                        nums[i] = nums[i] / 2;
                        count++;
                    }
                }

                for (int i = 0; i < n - 1; i++)
                {

                    if (nums[i] < nums[i + 1])
                    {
                        x = 1;
                    }
                    else
                    {
                        x = 0;
                        break;
                    }
                }

                if (n > 1 && nums[n - 1] == 0)
                    y = 1;

                if (y == 1)
                    break;
            }
        }

        if (y != 1)
            cout << count << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}