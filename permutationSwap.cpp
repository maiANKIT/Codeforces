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

        for(int i = 0; i<n; i++) cin>>nums[i];

        int a = 0;
        // bool x = 0;
        for(int i = 0; i<n; i++){

            if(nums[i] != i+1){
                a = i + 1;
                break;
            }

        }
        int x = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == a){
                x = i+1;
            }
        }

        cout<<abs(x - a)<<endl;



    }

   return 0;
}