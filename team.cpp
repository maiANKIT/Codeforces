#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int count = 0;

    while(n--){

        int a, b, c;
        cin>>a>>b>>c;

        int x = 0;

        if(a == 1) x++;
        if(b == 1) x++;
        if(c == 1) x++;

        if(x >= 2) count++;

    }

    cout<<count;

   return 0;
}