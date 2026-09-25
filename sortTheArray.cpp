#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = nums;

    sort(ans.begin(), ans.end());

    bool x = 0;

    if (nums == ans)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
    }
    else
    {
        
        int l = -1, r = -1;

        for(int i = 0; i<n; i++){

            if(nums[i] != ans[i]){

                l = i;
                break;

            }

        }

        for(int i = l + 1; i<n; i++){

            if(nums[i] != ans[i]){

                r = i;

            }

        }

        reverse(nums.begin() + l, nums.begin() + r + 1);

        if(nums == ans){

            cout<<"yes"<<endl;
            cout<<l+1<<" "<<r+1;

        }
        else cout<<"no";

    }

    return 0;
}