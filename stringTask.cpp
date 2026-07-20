#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    string a = "";

    for(int i = 0; i<s.size(); i++){

        if(!(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y')){
            
            if(s[i] < 91){
                char x = s[i] + 32;
                a = a + '.' + x;
            }
            else a = a + '.' + s[i];
        }
    }
    cout<<a;

   return 0;
}