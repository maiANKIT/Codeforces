#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
    
    vector<vector<char>> nums(10, vector<char>(10));
    
    for(int i= 0; i<10; i++){
        
        for(int j= 0; j<10; j++){
            cin>>nums[i][j];
        }
        
    }
    
    int sum = 0;
    
    for(int i = 0; i<10; i++){
       
       for(int j = 0; j<10; j++){
           
           if(nums[i][j] == 'X'){
              
              if((j>i && j<10-i)){
                  sum = sum + i +1;
              }
              else{
                  sum = sum + min(j+1, 10-j);
              }
              
               
           }
           
       }
        
    }
    
    cout<<sum<<endl;
    }

    return 0;
}