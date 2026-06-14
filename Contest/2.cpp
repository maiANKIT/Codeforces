#include <iostream>
#include <string>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int i = 0;

        while(i+k < s.size()){

            if(s[i] == '1'){
                s[i] = '0';
                if(s[i + k] == '1'){
                    s[i + k] = '0';
                }
                else s[i + k] = '1';
            }
            i++;

        }

        bool x = 1;

        for(int i = 0; i<n; i++){

            if(s[i] == '1'){
                x = 0;
                break;
            }

        }

        if(x == 0){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }

   return 0;
}