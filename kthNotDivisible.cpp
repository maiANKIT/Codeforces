#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long n, k;
        cin>>n>>k;

        long long count = 0;
        
        long long i = 1;
        long long x = 0;
        while(count < k){
            if(i%n != 0) count++;

            if(count == k) x = i;
            i++;

        }

        cout<<x<<endl;

    }

   return 0;
}