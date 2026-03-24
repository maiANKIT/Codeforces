#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> poles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> poles[i];
    }

    int count1 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (poles[i] != poles[i + 1])
            count1++;
    }

    cout << count1;

    return 0;
}