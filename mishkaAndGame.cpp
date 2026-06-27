#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    
    int countM = 0;
    int countC = 0;

    while(n--){

        int a, b;
        cin>>a>>b;

        if(a>b) countM++;
        else if(b>a) countC++;

    }

    if(countM > countC) cout<<"Mishka";
    else if(countM < countC) cout<<"Chris";
    else cout<<"Friendship is magic!^^";

   return 0;
}