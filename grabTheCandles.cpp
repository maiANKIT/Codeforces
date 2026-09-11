#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int o = 0, e = 0;
        for(int i = 0; i<n; i++){
            
            int a;
            cin>>a;

            if(a%2 == 0){
                e += a;
            }
            else{
                o += a;
            }

        }

        if(e > o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 

    }

   return 0;
}