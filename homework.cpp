#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, m;
        cin>>n;

        string ns, ms, as;
        cin>>ns;

        cin>>m;
        cin>>ms;

        cin>>as;

        for(int i = 0; i<m; i++){

            if(as[i] == 'D'){

                ns += ms[i];

            }
            else{
                ns = ms[i] + ns;
            }

        }

        cout<<ns<<endl;



    }

   return 0;
}