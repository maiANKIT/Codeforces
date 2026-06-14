#include <iostream>
#include <climits>

using namespace std;

int main()
{

    long long t;
    cin>>t;

    while(t--){

        long long a, b, x;
        cin>>a>>b>>x;

        long long mini = INT_MAX;
        
        long long count1 = abs(a - b);

        long long count2 = 0;
        while(a != b){

            if(a - b == 1){
                count2++;
                a--;
            }
            else if(b - a == 1){
                count2++;
                b--;
            }
            else if(a > b){
                a = a / x;
                count2++;
            }
            else if(b > a){
                b = b / x;
                count2++;
            }

        }

        cout<<min(count1, count2)<<endl;
        
    }

   return 0;
}