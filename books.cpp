#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, t;
    cin>>n>>t;

    vector<int> nums(n);
    for(int i = 0; i<n; i++) cin>>nums[i];

    int i = 0, j = n - 1;

    int count = 0;

    for(int i = 0; i<nums.size(); i++){

        if(t - nums[i] >= 0){
            t -= nums[i];
            count++;
        }
        else continue;

    }

    cout<<count;

   return 0;
}