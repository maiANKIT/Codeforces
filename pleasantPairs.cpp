#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> nums(n);

        int count = 0;

        for(int &i: nums) cin>>i;

        for(int i = 0; i<n; i++){

            for(int j = i + 1; j<n; j++){
                if(nums[i]*nums[j] == i + j + 2) count++;
            }

        }

        cout<<count<<endl;

    }

   return 0;
}