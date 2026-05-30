#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<int>> nums(5, vector<int>(5));

    int x = 0;
    int y = 0;

    for(int i = 0; i<5; i++){

        for(int j = 0; j<5; j++){

            cin>>nums[i][j];

            if(nums[i][j] == 1){
                x = i;
                y = j;
            }

        }

    }

    cout<<abs(x - 2) + abs(y - 2);

   return 0;
}