#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long n, s;
        cin >> n >> s;

        vector<long long> nums(n);

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        sort(nums.begin(), nums.end());

        long long count = 0;

        long long i = 0, j = n - 1;

        vector<long long> ans;

        // int i = 0;

        while(count < s){

            long long data = accumulate(nums.begin() + 2*i, nums.end() - i, 0LL);

            if(count%2 == 0) i += 2;

            ans.push_back(data);
            count++;

        }

        long long mn = *min_element(nums.begin(), nums.end());

        cout<<mn<<endl;

    }

    return 0;
}