#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    int x = 0;
    for(int i = 0; i<prime.size(); i++){

        if(prime[i] > n && prime[i] == m){
            x = prime[i];
            break;
        }
        else if(prime[i] > n && prime[i] != m){
            break;
        }

    }

    if(x == m) cout<<"YES";
    else cout<<"NO";

   return 0;
}