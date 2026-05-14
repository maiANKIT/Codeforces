#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        if((n%2 == 0 && n%k == 0)) cout<<"YES"<<endl;
        else{

            int x = n%max(2, k);
            int y = x%min(2, k);

            if(y != 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }

    }

   return 0;
}