#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b;
    cin>>a>>b;

    int count = a;

    int rem = a;

    while(rem >= b){

        count += rem/b;
        rem = rem/b + rem%b;

    }

    cout<<count;

   return 0;
}