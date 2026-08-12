#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int sum = 0;
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;

        sum += a;
    }

    int x = sum % 4;
    int y = sum / 4;

    if(x > 0) y++;

    cout<<y;

   return 0;
}