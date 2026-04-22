#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;

        string s, t;
        cin>>t>>s;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

   return 0;
}