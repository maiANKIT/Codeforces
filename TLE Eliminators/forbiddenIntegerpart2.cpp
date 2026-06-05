#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k, x;
        cin >> n >> k >> x;

        if (n == k && k != x)
        {

            cout << "YES" << endl;
            cout << 1 << endl;
            cout << k << endl;
        }
        else if (x == k && k == 1)
            cout << "NO" << endl;
        else if (x != 1)
        {

            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if (x == 1)
        {
            int sum = 0;
            int a = 2;

            vector<int> nums;

            while (sum < n)
            {

                if (n - sum <= k && n - sum != x)
                {

                    a = n - sum;
                }
                sum = sum + a;

                nums.push_back(a);
            }

            if (sum == n)
            {
                cout << "YES" << endl;
                cout << nums.size() << endl;

                for (int i = 0; i < nums.size(); i++)
                {
                    cout << nums[i] << " ";
                }
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}