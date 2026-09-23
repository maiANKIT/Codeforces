#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int x, y;

        cin>>x>>y;

        y = 4*y;

        if(x + y == 0) cout<<0<<endl;
        else if(x + y <= 15) cout<<1<<endl;
        else{

            int count = (x + y)/15;
            if((x+y) % 15 > 0) count++;

            cout<<count<<endl;

        }

    }

   return 0;
}