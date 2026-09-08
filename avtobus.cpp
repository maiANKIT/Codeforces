#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        if(n%2 != 0 || n < 4) cout<<-1<<endl;
        else{

            if(n == 4) cout<<1<<" "<<1<<endl;
            else
            cout<<(n+5)/6<<" "<<n/4<<endl;

            // if(n%4 == 2 && n%6 == 0){
            //     cout<<n/6 + 1<< " "<<(n-6)/4 + 1<<endl;
            // }
            // else if(n == 4 || n == 6) cout<<1<<" "<<1<<endl;
            // else if(n%4 == 0 && n%6 == 0){
            //     cout<<n/6<<" "<<n/4<<endl;
            // }
            // else if(n%4 == 0 && n%6 == 4){
            //     cout<<n/6 + 1<<" "<<n/4<<endl;
            // }
            // else if(n%4 == 2){
            //     cout<<n/6 + 1<<" "<<n/4+1<<endl;
            // }
            // else if(n%6 == 2){
            //     cout<<n/6+1<<" "<<n/4<<endl;
            // }
            // else cout<<"Abhi aur testcase bache h"<<endl;

        }


        
    }

   return 0;
}