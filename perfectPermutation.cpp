#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n % 2 != 0)
        cout << -1;
    else
    {

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                nums[i + 1] = i + 1;
            }
            else
                nums[i - 1] = i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
    }

    return 0;
}