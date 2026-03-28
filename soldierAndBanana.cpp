#include <iostream>

using namespace std;

int main()
{

    int k;
    cin >> k;

    int n;
    cin >> n;

    int w;
    cin >> w;

    int totalprice = 0;
    for (int i = 1; i <= w; i++){
    
        totalprice = totalprice + k * i;
    }


    if(n - totalprice >= 0)
        cout<<0;
    
    else
        cout<<abs(n-totalprice);
    

    return 0;
}