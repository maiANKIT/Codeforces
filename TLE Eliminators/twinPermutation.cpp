#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int x = n + 1;

        while(n--){

            int a;
            cin>>a;

            cout<<x - a<<" ";   

        }

        cout<<endl;

    }

   return 0;
}