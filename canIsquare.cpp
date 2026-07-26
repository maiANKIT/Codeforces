#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        long long sum = 0;
        for(int i = 0; i<n; i++){

            long long a;
            cin>>a;
            sum = sum + a;

        }

        long long x = sqrt(sum);
        if(x*x == sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

   return 0;
}