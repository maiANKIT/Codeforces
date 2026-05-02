#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    int x = 0;

    while (t--)
    {

        long long x;
        cin >> x;

        for (int i = 2; i < x; i++)
        {

            if(x&1 == 0 && i == x - 1 && x%i == 0){
                cout<<"YES"<<endl;
                break;
            }
            else if(x&1 == 1 && i == x - 2 && x%i == 0){
                cout<<"YES"<<endl;
                break;
            }
            else if (x % i == 0)
            {
                cout << "YES" << endl;
                break;
            }
            

        }

        if (x == 2)
            cout << "NO" << endl;
        else if (x == 3)
            cout << "YES" << endl;
        else if (x == 4)
            cout << "NO" << endl;
    }

    return 0;
}