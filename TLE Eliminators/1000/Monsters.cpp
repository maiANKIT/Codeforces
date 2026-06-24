#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {

            if (nums[i] % k == 0)
            {
                arr.push_back(i + 1);
            }
        }

        int j = 0;

        if (arr.size() == 0)
        {

            for (int i = 0; i < n; i++)
                arr.push_back(i + 1);
        }
        else
            for (int i = 0; i < n; i++)
            {

                if (arr[i] == i + 1){
                    j++;
                }
                else
                {
                    arr.push_back(i + 1);
                }
            }

        cout << "arr size: " << arr.size() << endl;

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}