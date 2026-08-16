#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int sum = 0;

    vector<int> nums(n);

    for(int i = 0; i<n; i++){

        cin>>nums[i];
        sum += nums[i];

    }

    sort(nums.begin(), nums.end());

    int count = 0;
    int ans = 0;
    int i = nums.size() - 1;
    
    while(ans <= sum - ans && i >= 0){

        ans += nums[i];
        i--;
        count++;

    }

    cout<<count;

   return 0;
}