#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int count = 0;

        for(int i = 1; i<=n; i++){
            int countN = 0;
            string x = to_string(i);
            for(int i = 0; i<x.size(); i++){

                if(x[i] > '0') countN++;

            }

            if(countN == 1) count++;
        }

        cout<<count<<endl;

    }

   return 0;
}