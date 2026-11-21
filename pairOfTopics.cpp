#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    cin>>n;

    vector<long long> nums(n), nums2(n);

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    for(int i = 0; i<n; i++){
        cin>>nums2[i];
    }

    // sort(nums.begin(), nums.end());
    // sort(nums2.begin(), nums2.end());

    long long count = 0;

    long long sum = nums[0];
    long long sum2 = nums2[0];

    vector<long long> c(n);

    for(int i = 0; i<n; i++){

        c[i] = nums[i] - nums2[i];

    }

    sort(c.begin(), c.end());

    long long i = 0, j = n - 1;

    while(i < j){

        if(c[i] + c[j] > 0){

            count += j - i;
            j--;

        }
        else i++;

    }

    cout<<count;

   return 0;
}