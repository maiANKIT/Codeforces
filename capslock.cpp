#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    cin>>str;

    char a = str[0];

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if(a >= 'a' && a <='z') str[0] = a - 32;

    cout<<str;

   return 0;
}