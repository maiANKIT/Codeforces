#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin>>n>>m;

    int countBW = 0, countC = 0;

    for(int i = 0; i<n; i++){

        for(int j = 0; j<m; j++){

            char x;
            cin>>x;

            if(x == 'C' || x == 'M' || x == 'Y') countC++;
            else countBW++;

        }

    }

    if(countBW == n*m) cout<<"#Black&White";
    else cout<<"#Color";

   return 0;
}