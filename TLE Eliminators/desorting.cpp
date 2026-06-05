#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin>>n;

        int a = INT_MAX;
        int mini2 = INT_MAX;

        int p = 0;
        int q = 0;

        bool w = 1;

        for(int i = 0; i<n; i++){

            int b;
            cin>>b;

            int mini = abs(a - b);

            if(mini < mini2){

                mini2 = mini;

            }
            
            if(b < a && a != INT_MAX){
                w = 0;
            }

            a = b;

        }

        if(w == 0) cout<<0<<endl;
        else if(mini2 == 0) cout<<1<<endl;
        else cout<<mini2/2 + 1<<endl;
       
    }

    return 0;
}