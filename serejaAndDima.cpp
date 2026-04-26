#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i = 0; i<nums.size(); i++){
        cin>>nums[i];
    }

    int i = 0;
    int j = n - 1;

    int s = 0;
    int d = 0;

    int moves = 0;

    while(j>=i){

        if(moves%2 == 0 && nums[i] >= nums[j]){
            s = s + nums[i];
            i++;
        }
        else if(moves%2 == 0 && nums[j] > nums[i]){
            s = s + nums[j];
            j--;
        }
        else if(moves%2 == 1 && nums[i] >= nums[j]){
            d = d + nums[i];
            i++;
        }
        else if(moves%2 == 1 && nums[j] > nums[i]){
            d = d + nums[j];
            j--;
        }

        moves++;

    }

    cout<<s<<" "<<d;

   return 0;
}