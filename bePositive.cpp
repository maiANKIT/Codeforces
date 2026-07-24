#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int count0 = 0;
        int sum = 0;
        int multi = 1;

        for(int i = 0; i<n; i++){

            int a;
            cin>>a;

            if(a < 0) {
                multi *= a;
                sum += abs(a);
            }
            else if(a == 0) count0++;

        }

        int fSum = 0;

        if(multi < 0) fSum = sum%2 + 1;

        fSum += count0;

        cout<<fSum<<endl;

    }

   return 0;
}