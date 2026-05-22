#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t;
    cin>>t;

    while(t--){

        long long a;
        cin>>a;

        long long sum = 0;

        for(long long i = 1; i<=a; i++){

            long long x = i&(i-1);
            if(x == 0) sum = sum - i;
            else sum = sum + i;

        }

        cout<<sum<<endl;

    }

    // int a;
    // cout<<"enter a: ";
    // cin>>a;

    // int x = a&(a-1);
    // cout<<x;

   return 0;
}