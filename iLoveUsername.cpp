#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    int count = 0;

    int a;
    cin>>a;
    int mini = a;
    int maxi = a;

    t--;

    while(t--){

        int b;
        cin>>b;

        if(b < mini){
            mini = b;
            count++;
        }
        else if(b > maxi){
            maxi = b;
            count++;
        }

    }

    cout<<count;

   return 0;
}