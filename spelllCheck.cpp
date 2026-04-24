#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--){

        int n;
        cin>>n;

        string x;
        cin>>x;

        string y = "Timru";

        sort(x.begin(), x.end());

        if(x == y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}