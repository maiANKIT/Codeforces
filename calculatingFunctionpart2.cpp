#include <iostream>

using namespace std;

int main()
{

    long long x;
    cin>>x;

    long long ans = 0;
    if(x%2 == 0) ans = x/2;
    else{
        x = x + 1;
        ans = -1*(x / 2);
    }

    cout<<ans;

   return 0;
}