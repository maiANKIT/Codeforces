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

        int sum = 0;
        int multiply = 1;

        for (int i = 0; i < n; i++)
        {

            cin>>nums[i];
            sum = sum + nums[i];
            multiply = multiply * nums[i];

        }

        int count = 0;

        while(sum < 0 || multiply != 1){
            sum = sum + 1;
            multiply = multiply * -1;
            count++;
        }

        cout<<count<<endl;

    }


return 0;
}