#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long a, b;
        cin>>a>>b;

        long long count = 0;
        
        while(a > 0){

            long long tempb2 = b+1;

            long long a1 = a / b;
            long long a2 = a / tempb2;

            if(a1 > a2){
                a = a2;
            }
            else{
                a = a1;
                b++;
            }
            count++;

        }

        cout<<count<<endl;

    }

   return 0;
}