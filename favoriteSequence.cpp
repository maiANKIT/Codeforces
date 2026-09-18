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

        vector<int> ans(n);

        int i = 0, j = n -1;

        int a = 0;

        while(i <= j){

            if(a%2 == 0){
                ans[a] = nums[i];
                i++;
            }
            else{
                ans[a] = nums[j];
                j--;
            }

            a++;

        }

        for(int i = 0; i<n; i++) cout<<ans[i]<<" ";
        cout<<endl;

    }

   return 0;
}