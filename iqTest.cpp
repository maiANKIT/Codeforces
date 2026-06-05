#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int count = 0;
    int counto = 0;
    int x = 0;
    int y = 0;
    for(int i = 0; i<n; i++){

        int a;
        cin>>a;
        if(a%2 == 0){
             count++;
             x = i + 1;
        }
        else{
            counto++;
            y = i + 1;
        } 

    }

    if(counto > count) cout<<x;
    else cout<<y;

   return 0;
}