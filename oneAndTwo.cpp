#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int k = 0;

        long long m = 1;
        vector<int> nums(n);
        for(int i = 0; i<n; i++){
            cin>>nums[i];
            m = m * nums[i];
        }

        long long product = 1;

        for(int i = 0; i<n-1; i++){
            
            product = product * nums[i];
            if(m%product == 0 && m/product == product){
                k = i+1;
                break;
            }

        }

        if(k == 0) cout<< -1<<endl;
        else cout<<k<<endl;

    }

   return 0;
}