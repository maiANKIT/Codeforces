#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int a, b, c;
        cin>>a>>b>>c;

        int mini = min({a, b, c});

        int maxi = max({a, b, c});

        int count = 0;

        while(!(a == b || b == c || c == a)){

            int maxi = max({a, b, c});
            int mini = min({a, b, c});

            if(maxi == a){
                
                a--;
                if(mini == b) b++;
                else if(mini == c) c++;

            }
            else if(maxi == b){
                
                b--;
                if(mini == a) a++;
                else if(mini == c) c++;

            }
            else if(maxi == c){
                c--;
                if(mini == a) a++;
                else if(mini == b) b++;
            }
            
            count++;

        }

        cout<<count<<endl;

    }

   return 0;
}