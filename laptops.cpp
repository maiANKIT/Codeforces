#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
 
    bool x = 0;
 
    while(n--){
 
        int a, b;
        cin>>a>>b;
        if(a < b)
            x = 1;
        
 
    }
    if(x == 1) cout<<"Happy Alex";
    else cout<<"Poor Alex";
 
   return 0;
}