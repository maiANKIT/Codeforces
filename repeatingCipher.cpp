#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int k = 1;

        int x;
        cin>>x;

        string a = "";

        for(int i = 0; i<s.size(); i = i + k){

            a = a + s[i];
            k++;

        }

        cout<<a<<endl;

    }

   return 0;
}