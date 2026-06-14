#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long a, b;
        cin>>a>>b;

            int count = abs(b - a) / 10;

            if(abs(b-a)%10 != 0) count++;
            cout<<count<<endl;

    }

   return 0;
}