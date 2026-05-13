#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    bool x = 0;

    int mini = INT_MAX;

    while(t--){
        int a;
        cin>>a;

        mini = min(mini, abs(a));

    }

    if(mini == 0) cout<<0;
    else cout<<mini;

   return 0;
}