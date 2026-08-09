#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin>>n;

        string s;
        cin>>s;

        string a = "";

        for(int i = 0; i<s.size(); i++){

            s[i] = tolower(s[i]);

        }

        for(int i = 0; i<s.size(); i++){

            if(i == 0) a += s[i];
            else if(s[i] != a[a.size() - 1]) a += s[i]; 

        }

        if(a == "meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}