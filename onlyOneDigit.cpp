#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int a;
        cin>>a;

        int mini = INT_MAX;

        while(a > 0){

            mini = min(mini, a%10);
            a = a / 10;

        }
        cout<<mini<<endl;

    }

   return 0;
}