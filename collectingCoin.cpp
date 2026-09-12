#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int a, b, c, n;
        cin>>a>>b>>c>>n;

        int maxi = max({a, b, c});

        int sum = 3*maxi - a - b - c;

        int ans = n - sum;

        if(ans < 0) cout<<"NO"<<endl;
        else{

            if(ans % 3 == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }

    }

   return 0;
}