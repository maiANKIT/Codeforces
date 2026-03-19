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

    vector<vector<int>> nums(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nums[i][j];
        }
    }

    bool x = 1;
    int k = 0;
    int target = 0;
    for (int i = 0; i < n; i++)
    {

        target = nums[i][k];
        for (int j = 0; j < m; j++)
        {
            if (nums[i][j] != target)
            {
                x = 0;
                break;
            }
        }
        k++;
    }

    if (x == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}