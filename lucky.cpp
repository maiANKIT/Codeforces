#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        string x;
        cin>>x;

        int a = (x[0] - 48 + x[1] - 48 + x[2] - 48) -  (x[3] - 48 + x[4] - 48 + x[5] - 48);

        if(a == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }

   return 0;
}