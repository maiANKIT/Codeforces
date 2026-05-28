#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        if(x == s) cout<<0<<endl;
        else{

            int count = 0;
            bool a = 0;
            while(x.size() <= s.size()){

                x = x + x;

                size_t pos = x.find(s);
                count++;

                if(pos != string::npos){
                    a = 1;
                    break;
                }

            }

            if(a == 1) cout<<count<<endl;
            else cout<<-1<<endl;

            // if(count > 0) cout<<count<<endl;
            // else cout<<-1<<endl;

        }

    }

   return 0;
}