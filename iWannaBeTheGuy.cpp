#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, p;
    cin>>n>>p;

    vector<int> nums;
    for(int i = 0; i<p; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int q;
    cin>>q;

    for(int i = 0; i<q; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());

    int count = 0;
    int x = 1;

    bool y = 1;

    for(int i = 0; i<nums.size(); i++){

        if(nums[i] == x - 1){
            continue;
        }
        else if(nums[i] == x){
            count++;
            x++;
        }

    }

    if(count != n) y = 0;

    if(y == 1) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;
}