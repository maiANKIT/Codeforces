#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int ans = 0;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(x == 1){
            ans = 1;
        }

    }

    if(ans == 1) cout<<"HARD";
    else cout<<"EASY";

   return 0;
}