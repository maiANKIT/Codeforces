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

        int n;
        cin >> n;

        int a = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            
            if(i == 0) a = x;
        }

        if (a == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}