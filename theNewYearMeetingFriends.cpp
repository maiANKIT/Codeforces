#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    cin>>a>>b>>c;

    if(a>b) swap(a, b);
    if(b>c) swap(b, c);

    if(a>b) swap(a, b);
    if(b>c) swap(b, c);

    int min = (a + c) /2;

    cout<<abs(min - a)  + abs(min - c);


   return 0;
}