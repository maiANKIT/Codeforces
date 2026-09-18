#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        string a = to_string(n);

        int ans = (a.size() - 1)*9;

        int b = a[0] - 48;

        ans += b - 1;

        int c = 0, p = 0;

        while(c < a.size()){

            p = p * 10 + (a[0] - 48);
            c++;

        }

        if(p <= n) ans++;
        
        cout<<ans<<endl;

    }

   return 0;
}