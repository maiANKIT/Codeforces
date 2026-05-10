#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int maxi = 0;

    for(int i = 0; i<n; i++){
        maxi = max(maxi, a[i]);
    }

    int sum = 0;

    for(int i = 0; i<n; i++){
        if(a[i] != maxi){
            sum = sum + maxi - a[i];
        }
    }

    cout<<sum;

   return 0;
}