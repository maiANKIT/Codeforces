#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long k, r;
    cin>>k>>r;

    long long i = 1;
    while((k*i) % 10 != r && k*i %10 != 0){
        i++;
    }

    cout<<i<<endl;

   return 0;
}