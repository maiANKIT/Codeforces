#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, x;
        cin>>n>>x;

        int count = 1;
        int y = 2;
        
        while(y < n){
            count++;
            y += x;
        }

        cout<<count<<endl;

    }

   return 0;
}