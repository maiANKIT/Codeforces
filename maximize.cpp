#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int ans = 0;
        int f = 0;
        for(int i = 1; i<n; i++){

            int t = __gcd(n, i) + i;

            if(ans < t){
                f = i;
                ans = max(ans, t);
            }
            

        }

        cout<<f<<endl;

    }

   return 0;
}