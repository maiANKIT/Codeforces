#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<long long> nums(n);

    for(int i = 0; i<n; i++) cin>>nums[i];

    int a = 0;

    while(a < n){

        int count = 0;

        for(int i = 1; i<nums[a]; i++){

            if(nums[a] % i == 0) count++;
            if(count >= 3) break;

        }

        count++;

        if(count == 3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        a++;

    }

   return 0;
}