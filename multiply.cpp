#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long x;
        cin>>x;

        int count = 0;

        while(x > 1){

            if(x%6 == 0){
                x/= 6;
                count++;
            }
            else{
                x *= 2;
                count++;
            }

        }

        if(x == 1) cout<<count<<endl;
        else cout<<-1<<endl;

    }

   return 0;
}