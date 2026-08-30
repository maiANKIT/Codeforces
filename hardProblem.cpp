#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int m, a, b, c;
        cin>>m>>a>>b>>c;

        int sum = 0;

        int sum1 = min(a, m), sum2 =min(b, m);

        if(sum1 < m){
            int x = m - sum1;
            sum1 += min(x, c);
            c -= min(x, c);
        }
        if(sum2 < m){
            int x = m - sum2;
            sum2 += min(x, c);
            c -= min(x, c);
        }

        sum = sum1 + sum2;
        cout<<sum<<endl;

    }

   return 0;
}