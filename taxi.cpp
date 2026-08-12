#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    int i = 0, j = nums.size() - 1;

    int count = 0;
    while (i <= j)
    {

        if (nums[j] == 4)
        {
            count++;
            j--;
        }
        else
        {

            int sum = nums[j];

            if (nums[i] + sum > 4)
            {
                j--;
                count++;
            }
            else
            {
                while (sum < 4)
                {

                    sum += nums[i];
                    if(sum <= 4)
                    i++;
                }
                j--;
                count++;
            }
            sum = 0;
        }
    }

    cout << count;

    return 0;
}