#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, k;
    cin>>n>>k;

    vector<long long> nums(n);

    for(long long &i: nums) cin>>i;

    sort(nums.begin(), nums.end());

    if(k == 0){
        int x = nums[0] - 1;
        if(x == 0) cout<<-1;
        else cout<<x;
    }
    else if(k < nums.size() && nums[k - 1] == nums[k]){
        cout<<-1;
    }
    else if(k < nums.size() && nums[k - 1] != nums[k]){
        cout<<nums[k - 1];
    }
    else if(k == nums.size()){
        cout<<nums[n - 1]<<endl;
    }

   return 0;
}