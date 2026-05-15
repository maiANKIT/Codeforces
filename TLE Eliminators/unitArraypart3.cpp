#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int count1 = 0;
        int countm1 = 0;

        while(n--){

            int a;
            cin>>a;

            if(a == 1) count1++;
            else if(a == -1) countm1++;

        }

        // cout<<"countm1: "<<countm1<<endl;
        // cout<<"count1: "<<count1<<endl;

        if(countm1 % 2 == 0){

            if(countm1 <= count1) cout<<0<<endl;
            else if(count1 < countm1){
                cout<<countm1 - count1<<endl;
            }

        }
        else if(countm1 % 2 == 1){

            if(count1 >= countm1) cout<<1<<endl;
            else if(count1 < countm1){
                cout<<countm1 - count1 + 1<<endl;
            }

        }

    }

   return 0;
}