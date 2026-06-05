#include <iostream>
#include <vector>
#include <algorithm> // Don't forget this for min() with an initializer list

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        vector<vector<char>> nums(10, vector<char>(10));
        
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> nums[i][j];
            }
        }
        
        int sum = 0;
        
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(nums[i][j] == 'X') {
                    
                    int top = i;
                    int bottom = 9 - i;
                    int left = j;
                    int right = 9 - j;
                    
                    sum = sum + min({top, bottom, left, right}) + 1;
                    
                }
            }
        }
        
        cout << sum << endl;
    }

    return 0;
}