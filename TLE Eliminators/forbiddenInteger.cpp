#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, k, x;
        cin>>n>>k>>x;

        int sum = 0;

        while(n > sum){

            sum = sum + k;
            if(sum > n){
                sum = sum - k;
                k--;

                if(k == x) k--;
            }

        }

        cout<<

    }

   return 0;
}