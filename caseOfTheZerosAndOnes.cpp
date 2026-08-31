#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    string s;
    cin>>s;

    string ans = "";

    for(int i = 0; i<s.size(); i++){

        if(ans.size() > 0 && (ans.back() == '0' && s[i] == '1' ||ans.back() == '1' && s[i] == '0')){
            ans.pop_back();
        }
        else {
            ans+=s[i];
        }
        
    }

    cout<<ans.size();

   return 0;
}