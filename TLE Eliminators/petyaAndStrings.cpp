#include <iostream>

using namespace std;

int main()
{

    string a,b;
    cin>>a>>b;

    bool xm1 = 0;
    bool x1 = 0;
    // bool x0 = 0;

    for(int i = 0; i<a.size(); i++){

        if(a[i] >= 'A' && a[i] <= 'Z') a[i] = a[i] + 32;
        if(b[i] >= 'A' && b[i] <= 'Z') b[i] = b[i] + 32;

        if(a[i] > b[i]){
            x1 = 1;
            break;
        }
        else if(b[i] > a[i]){
            xm1 = 1;
            break;
        }

    }

    if(x1 == 1) cout<<1;
    else if(xm1 == 1) cout<<-1;
    else cout<<0;

   return 0;
}