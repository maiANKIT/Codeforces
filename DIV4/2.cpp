#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int count = 0;

        if(s[0] == 'B') count++;

        for(int i = 1; i<n; i++){

            if(s[i - 1] == 'B' && s[i] == 'B') count++;
            else if(s[i - 1] == 'R' && s[i] == 'R') count++;

        }

        cout<<count<<endl;

    }

   return 0;
}