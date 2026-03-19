#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());
    int min = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > min)
        {
            min = nums[i];
            break;
        }
    }

    if (min != nums[0])
        cout << min;
    else
        cout << "NO";

    return 0;
}