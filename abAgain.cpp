#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;

        int sum = 0;
        while(x>0){
            sum =sum + x % 10;
            x = x/10;
        }

        cout<<sum<<endl;

    }

   return 0;
}