#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<string> nums;

    for (int i = 0; i < n; i++)
    {
        string y;
        cin >> y;
        nums.push_back(y);
    }

    bool x = 1;
    int k = 0;
    int target = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m - 1; j++)
        {
            if (m > 1 && nums[i][j] != nums[i][j + 1])
            {
                x = 0;
                break;
            }
        }
    }

    bool s = 1;
    for (int i = 1; i < m - 1; i++)
    {
        if (m > 1 && nums[i][0] != nums[i - 1][0])
        {
        }
        else
        {
            s = 0;
            break;
        }
    }

    if (x == 1 && s == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}