#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin>>n>>m;

    vector<int> nums(n);
    for(int i = 0; i<n; i++){

        cin>>nums[i];

    }

    sort(nums.begin(), nums.end());

    int sum = 0;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){

        if(nums[i] > 0) break;

        sum += abs(nums[i]);
        count++;
        if(count == m) break;

    }

    cout<<sum;

   return 0;
}