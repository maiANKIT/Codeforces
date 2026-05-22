#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        string b;
        cin>>b;

        cout<<b[0];
        for(int i = 1; i<b.size() - 1; i = i + 2){
            cout<<b[i];
        }
        cout<<b[b.size()- 1]<<endl;

    }

   return 0;
}