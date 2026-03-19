#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> candies;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 3 == 0)
            candies.push_back(0);
        else if (x % 3 == 1)
            candies.push_back(2);
        else
            candies.push_back(1);
        cout << candies[i] << endl;
    }

    return 0;
}