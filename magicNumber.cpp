#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    bool x = 1;

    for(int i = 0; i<s.size(); i++){
        if(s[i] != '1' && s[i] != '4'){ 
            x = 0;
            break;
        }
    }

    if(x == 0) cout<<"NO";
    else{

        string f = "444";

        if(s.find(f) != string::npos){
            cout<<"NO";
        }
        else cout<<"YES";

    }

    return 0;
}