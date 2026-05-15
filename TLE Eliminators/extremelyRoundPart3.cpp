#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string x = to_string(n);

        int sum = 9*(x.size() - 1) + (x[0]-'0');

        cout<<sum<<endl;

    }

   return 0;
}