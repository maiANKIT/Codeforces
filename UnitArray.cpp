#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;

        int countE = 0;
        int countO = 0;

        for(int i = 0; i<x; i++){
            int y;
            cin>>y;

            if(y<0) countO++;
            else countE++;

        }

        if(x == countE){
            cout<<0<<endl;
        }
        else
        cout<<abs(countE - countO)<<endl;

    }

   return 0;
}