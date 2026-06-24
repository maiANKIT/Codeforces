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

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;

            if (a % k == 0)
                arr.push_back(i + 1);
        }

        if (arr.size() == 0)
        {

            for (int i = 0; i < n; i++)
            {
                arr.push_back(i + 1);
            }
        }
        else
        {
            int j = 0;
            for (int i = 0; i < n; i++)
            {

                if (arr[j] == i + 1)
                {
                    j++;
                }
                else
                    arr.push_back(i + 1);
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}