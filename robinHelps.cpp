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

        int coin = 0, count = 0;

        for (int i = 0; i < n; i++)
        {

            int val;
            cin>>val;

            if(val >= k) coin += val;
            else if(val == 0 && coin > 0){

                coin--;
                count++;

            }

        }

        cout<<count<<endl;

    }

    return 0;
}