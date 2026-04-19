#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int count = 0;

    while(n--){

        string x;
        cin>>x;

        if(x == "X++" || x == "++X") count++;
        else count--;

    }

    cout<<count;

   return 0;
}