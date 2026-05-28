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
        for(int i = 0; i<nums.size(); i++){

            cin>>nums[i];

        }

        int count = 0;

        for(int i = 0; i<nums.size()- 1; i++){

            if((nums[i] % 2 == 1 && nums[i + 1]%2 == 1) || (nums[i]%2 == 0 && nums[i+1]%2 == 0)) count++;

        }

        cout<<count<<endl;

    }

   return 0;
}