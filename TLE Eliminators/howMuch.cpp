#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        vector<int> nums(n);
        for(int i = 0; i<nums.size(); i++){

            cin>>nums[i];

        }

        bool x = 0;

        for(int i = 0; i<nums.size(); i++){

            if(nums[i] == k){
                x = 1;
                break;
            }

        }

        if(x == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

   return 0;
}