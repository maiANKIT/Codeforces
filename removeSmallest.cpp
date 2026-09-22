#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        sort(nums.begin(), nums.end());

        bool x = 0;
        if (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if(abs(nums[i] - nums[i+1]) > 1){
                    x = 1;
                    break;
                }
            }
        }

        if(x == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}