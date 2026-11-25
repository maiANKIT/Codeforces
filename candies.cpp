#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        long long i = 2;
        long long sum = 0;
        while(sum != n){

            sum = pow(2, i) - 1;

            if(n%sum == 0){
                cout<<n/sum<<endl;
                break;
            }
            i++;

        }

    }

   return 0;
}