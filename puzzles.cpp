#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin>>n>>m;

    vector<int> nums(m);

    for(int &i: nums) cin>>i;

    sort(nums.begin(), nums.end());

    int ans = INT_MAX;

    int diff = INT_MAX;

    for(int i = 0; i<m; i++){

        if(i + n > m) break;

        diff = nums[i + n - 1] - nums[i];

        ans = min(ans, diff);

    } 

    ans = min(ans, diff);

    cout<<ans<<endl;

   return 0;
}