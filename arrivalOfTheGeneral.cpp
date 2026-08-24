#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> nums(n);
    int mi = 0, ma = 0;

    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i<n; i++){

        cin>>nums[i];
        int a = mini, b = maxi;

        mini = min(mini, nums[i]);
        if(a >= mini){
            mi = i;
        }

        maxi = max(maxi, nums[i]);
        if(b != maxi){
            ma = i;
        }
    }

    if(mi < ma){
        cout<<ma + n - mi - 1;
    }
    else{
        cout<<ma + n - mi;
    }

   return 0;
}