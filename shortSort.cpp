#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        string x;
        cin>>x;

        if(x == "abc" || x == "acb" || x == "bac" || x == "cba") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

   return 0;
}