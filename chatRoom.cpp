#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    bool h = 0, e = 0, l1 = 0, l2 = 0, o = 0;

    for(int i = 0; i<s.size(); i++){

        if(s[i] == 'h' && h == 0) h = 1;
        else if(s[i] == 'e' && h == 1 && e == 0) e = 1;
        else if(s[i] == 'l' && h == 1 && e == 1 && l1 == 0) l1 = 1;
        else if(s[i] == 'l' && h == 1 && e == 1 && l1 == 1 && l2 == 0) l2 = 1;
        else if(s[i] == 'o' && h == 1 && e == 1 && l1 == 1 && l2 == 1 && o == 0) o = 1;

    }

    if(h == 1 && e == 1 && l1 == 1 && l2 == 1 && o == 1) cout<<"YES";
    else cout<<"NO";

   return 0;
}