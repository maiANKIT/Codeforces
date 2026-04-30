#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

        int x1, x2, x3, x4;
        cin>>x1>>x2>>x3>>x4;

        int maxi = max({x1, x2, x3, x4});

        if(maxi == x1){
                cout<<maxi - x2<<" "<<maxi - x3<<" "<<maxi - x4;
        }
        else if(maxi == x2){
                cout<<maxi - x1<<" "<<maxi - x3<<" "<<maxi - x4;
        }
        else if(maxi == x3){
                cout<<maxi - x2<<" "<<maxi - x1<<" "<<maxi - x4;
        }
        else if(maxi == x4){
                cout<<maxi - x2<<" "<<maxi - x3<<" "<<maxi - x1;
        }


   return 0;
}