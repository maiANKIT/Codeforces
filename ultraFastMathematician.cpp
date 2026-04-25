#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b;
    cin>>a>>b;

    string x = "";

    for(int i = 0; i<a.size(); i++){

        if(a[i] == '0' && b[i] == '0') x = x + '0';
        else if(a[i] == '1' && b[i] == '1') x = x + '0';
        else if(a[i] == '0' && b[i] == '1') x = x + '1';
        else if(a[i] == '1' && b[i] == '0') x = x + '1'; 

    }

    cout<<x;

   return 0;
}