#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t;
    cin>>t;

    while(t--){

        long long a;
        cin>>a;

        long long sum2 = 0;

        int b = 1;
        while(b<=a){

            sum2 = sum2 + b;
            b = b*2;

        }

        long long sum = (a*(a+1))/2;
        cout<<sum - 2*sum2<<endl;

    }

   return 0;
}