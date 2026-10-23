#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> nums(7);

    for(int &i: nums) cin>>i;

    int count = 0;

    int i = 0;
    while(n > 0){

        n -= nums[i];
        i++;
        if(i == 7) i = 0;
        count++;

    }

    if(count % 7 == 0) cout<<7;
    else
    cout<<count % 7<<endl;

   return 0;
}