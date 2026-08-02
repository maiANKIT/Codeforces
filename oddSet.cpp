#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int e = 0, o = 0;
        for(int i = 0; i<2*n; i++){
            int a;
            cin>>a;

            if(a%2 != 0){
                o++;
            }
            else e++;
        }

        if(e == o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

   return 0;
}