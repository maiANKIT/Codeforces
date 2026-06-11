#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int maxi = 0;
        for(int i = 0; i<n; i++){
            int a;
            cin>>a;
            
            maxi = max(maxi, a);
        }

        cout<<maxi<<endl;

    }

   return 0;
}