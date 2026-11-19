#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int a;
        cin>>a;

        if(a%7 == 0) cout<<a<<endl;
        else{

            if(a%7 <= 4) cout<<a - a%7<<endl;
            else cout<<a + 7 - a%7<<endl;

        }

    }

   return 0;
}