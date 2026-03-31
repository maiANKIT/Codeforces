#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin>>n;

    while(n > 0){
        
        int x;
        cin>>x;

        int y;
        cin>>y;

        vector<long long> nums(x);

        long long sum = 0;

        for(int i = 0; i<x; i++){
            cin>>nums[i];
            sum = sum + nums[i];
        }

        long long sum2 = sum;
        long long sum3 = sum;

        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<min(y, x); i++){
            sum2 = sum2 - nums[nums.size() - i - 1];
        }

        for(int i = 0; i<min(2*y, x); i++){
            sum3 = sum3 - nums[i];
        }

        cout<<max(sum2, sum3)<<endl;;

        n--;

    }

   return 0;
}