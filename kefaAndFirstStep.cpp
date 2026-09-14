#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<long long> nums(n);

    for(int i = 0; i<n; i++) cin>>nums[i];

    long long count = 1, maxi = 1;

    for(int i = 1; i<n; i++){

        if(nums[i] >= nums[i-1]) count++;
        else{ 
            maxi = max(maxi, count);
            count = 1;
        }

    }

    maxi = max(maxi, count);

    cout<<maxi;

   return 0;
}