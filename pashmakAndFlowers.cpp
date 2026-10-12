#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    cin >> n;

    vector<long long> nums(n);

    for (long long &i : nums)
    {
        cin >> i;
    }

    sort(nums.begin(), nums.end());

    long long i = 0, j = n - 1;

    long long count = 0;
    long long pairs = 0;

    if (nums[0] == nums[nums.size() - 1])
    {
        pairs = (n * (n - 1)) / 2;
    }
    else
    {
        long long countMI = 0, countMA = 0;

        while(countMI < n && nums[0] == nums[countMI]){
            countMI++;
        }

        while(countMA < n && nums[n - 1 - countMA] == nums[n - 1]){
            countMA++;
        }

        pairs = countMI*countMA;
    }

    cout << nums[nums.size() - 1] - nums[0] << " " << pairs;

    return 0;
}