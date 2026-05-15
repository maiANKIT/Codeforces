#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int count1 = 0;
        int countm1 = 0;

        while(n--){

            int a;
            cin>>a;

            if(a == 1) count1++;
            else if(a == -1) countm1++;

        }

        int moves = 0;

        while(countm1 > count1){

            countm1--;
            count1++;
            moves++;

        }

        if(countm1 % 2 != 0){
            moves++;
        }

        cout<<moves<<endl;

    }

   return 0;
}