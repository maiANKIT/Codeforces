#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].size() <= 10)
        {
            cout << s[i] << endl;
        }
        else
        {
            cout << s[i][0] << s[i].size() - 2 << s[i][s[i].size() - 1] << endl;
        }
    }

    return 0;
}