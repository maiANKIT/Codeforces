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

        int x = 0;

        for(int i = 0; i<n-1; i++){
            x = x^nums[i];
        }

        cout<<x<<endl;

    }

   return 0;
}