#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int a, b, c;
        cin>>a>>b>>c;

        int x = abs(a - b);
        int y = abs(b - c);
        if(x == 1 && y == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

   return 0;
}