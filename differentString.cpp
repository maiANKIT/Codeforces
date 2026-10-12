#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        set<char> st;

        for(int i = 0; i<s.size(); i++){
            st.insert(s[i]);
        }

        if(st.size() == 1) cout<<"NO"<<endl;
        else{

            char x = s[s.size() - 1];
            s.pop_back();

            s = x + s;

            cout<<"YES"<<endl;
            cout<<s<<endl;

        }

    }

   return 0;
}