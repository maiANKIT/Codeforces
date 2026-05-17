#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, k;
    cin>>n>>k;

    if(n%2 == 0){

        if(k <= n/2){
            cout<<2*k - 1;
        }
        else{
            cout<<(k -(n/2)) * 2;
        }

    }
    else{

        long long mid = (n+1)/2;
        if(k > mid){
            cout<<2*(k-mid);
        }
        else{
           cout<<2*k - 1;
        }

    }

   return 0;
}