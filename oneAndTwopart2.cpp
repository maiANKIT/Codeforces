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

        vector<int> nums(n);
        int twos = 0;
        for(int i = 0; i<n; i++){
            cin>>nums[i];
            if(nums[i] == 2) twos++;
        }

        if(twos%2 != 0){
            cout<<-1<<endl;
            continue;
        }

        int x = twos/2;
        int count = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == 2) count++;
            if(count == x){
                cout<<i+1<<endl;
                break;
            } 
        }
        

    }

   return 0;
}