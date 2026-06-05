#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int a;
        cin>>a;

        n--;

        vector<int> c;
        c.push_back(a);

        while(n--){

            int b;
            cin>>b;

            if(b >= a){
                c.push_back(b);
            }
            else{

                c.push_back(b);
                c.push_back(b);

            }
            a = b;

        }

        cout<<c.size()<<endl;
        for(int i = 0; i<c.size(); i++){

            cout<<c[i]<<" ";

        }
        cout<<endl;

    }

   return 0;
}