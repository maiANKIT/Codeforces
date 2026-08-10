#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 747 == 0 || n % 777 == 0 || n % 444 == 0) cout<<"YES";
    else{

        string a = to_string(n);

        bool x = 0;

        for(int i = 0; i<a.size(); i++){

            if(a[i] != '7' && a[i] != '4'){
                cout<<"NO";
                x = 1;
                break;
            }

        }

        if(x == 0) cout<<"YES"<<endl;

    }

   return 0;
}