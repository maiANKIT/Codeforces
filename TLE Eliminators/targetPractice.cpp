#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        vector<vector<char>> nums(5, vector<char>(5));

        for(int i = 0; i<5; i++){

            for(int j = 0; j<5; j++){
                cin>>nums[i][j];
            }

        }

        int count = 0;

        for(int i = 0; i<5; i++){

            for(int j = 0; j<5; j++){
                
                if(nums[i][j] == 'X' && (j == 0 || j == 9)) count++;
                else if(nums[i][j] == 'X' && ((j == 1 || j == 2 || j == 3 || j == 4 ||j == 5 || j == 6 || j == 7 || j == 8) && (i == 0 || i == 9))) count++;
                else if(nums[i][j] == 'X' && (j == 1 || j == 8)) count = count

            }

        }

    }

   return 0;
}