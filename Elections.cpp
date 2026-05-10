#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int a, b, c;
        cin>>a>>b>>c;

        int maxi = max({a, b, c});

        if(maxi == 0) cout<<1<<" "<<1<<" "<<1<<endl;
        else{
            
            if(a == maxi) cout<<maxi - a<<" "<<maxi - b + 1<<" "<<maxi - c + 1<<endl;
            else if(b == maxi) cout<<maxi - a + 1<<" "<<maxi - b<<" "<<maxi - c + 1<<endl;
            else if(c == maxi) cout<<maxi - a + 1<<" "<<maxi - b + 1<<" "<<maxi - c<<endl;

        }

    }

   return 0;
}