#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        long long a, b, c;
        cin>>a>>b>>c;

        long long maxi = max({a, b, c});

        if(a == b && b == c) cout<<1 <<" "<<1<<" "<<1<<endl;
        else if(maxi == a && a == b){
            cout<<maxi - a + 1<<" "<< maxi - b + 1<< " "<<maxi - c + 1<<endl;
        }
        else if(maxi == a && a == c){
            cout<<maxi - a + 1<<" "<< maxi - b + 1<< " "<<maxi - c + 1<<endl;
        }
        else if(maxi == c && c == b){
            cout<<maxi - a + 1<<" "<< maxi - b + 1<< " "<<maxi - c + 1<<endl;
        }
        else if(maxi == a){
            cout<<maxi - a <<" "<< maxi - b + 1<< " "<<maxi - c + 1<<endl;
        }
        else if(maxi == b){
            cout<<maxi - a + 1 <<" "<< maxi - b <<" "<< maxi - c + 1<<endl;
        }
        else if(maxi == c){
            cout<<maxi - a + 1 <<" "<< maxi - b + 1 <<" "<< maxi - c<<endl;
        }

    }

   return 0;
}