#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;

    int count = 1;
    int maxi = 1;

    int a;
    cin>>a;

    t--;

    while(t--){

        int b;
        cin>>b;

        if(b>a) count++;
        else count = 1;

        maxi = max(maxi, count);

        a = b;

    }

    cout<<maxi;

   return 0;
}