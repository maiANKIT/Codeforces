#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int count0 = 0;
        int count1 = 0;

        int n;
        cin >> n;
        int i = 0;

        while (i < n)
        {

            int x;
            cin >> x;

            if (x == 1)
                count1++;
            else
                count0++;
            
            i++;
        }

        int sum = -1 * count0 + count1;
        int multiply = 1;

        if(count0 % 2 == 0) multiply = count1;
        else multiply = -1 * count1;

        int count = 0;

        while(!(sum >= 0) && multiply != 1){

            sum = sum + 1;
            multiply = -1 * multiply;
            count++;

        }


        cout<<count<<endl;
    }

    return 0;
}