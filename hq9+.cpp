#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    bool x = 0;

    for(int i = 0; i<s.size(); i++){

        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+'){
            x = 1;
            break;
        }
        else continue;

    }

    if(x == 1) cout<<"YES";
    else cout<<"NO";

   return 0;
}