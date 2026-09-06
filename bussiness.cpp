#include <bits/stdc++.h>

using namespace std;

int main()
{

    int k;
    cin>>k;

    int sum = 0;
    vector<int> nums(12);
    for(int i = 0; i<12; i++) cin>>nums[i];

    sort(nums.begin(), nums.end());

    int count = 0;
    while(sum < k  && count<12){
        sum += nums[11 - count];
        count++;
    }

    if(sum < k) cout<<-1;
    else
        cout<<count;

   return 0;
}