#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin>>n>>k;

    // int y = 0;

    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    
    int x = a[k -1];

    int count = 0;

    for(int i = 0; i<n; i++){
        if(a[i] >= x && a[i]>0) count++;
        else break;
    }


    cout<<count;

   return 0;
}