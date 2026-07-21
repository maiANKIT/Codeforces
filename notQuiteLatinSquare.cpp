#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        vector<char> c;
        char a;
        for(int i = 0; i<3; i++){

            string s = "";
            bool x = 0;

            for(int j = 0; j<3; j++){

                char b;
                cin>>b;

                s = s + b;
                if(b == '?') x = 1;

            }

            if(x == 1){
                bool A = 1, B = 1, C = 1;
                for(int k = 0; k<3; k++){
                    
                    if(s[k] == 'A') A = 0;
                    else if(s[k] == 'B') B = 0;
                    else if(s[k] == 'C') C = 0;

                }

                if(A == 1) cout<<'A'<<endl;
                else if(B == 1) cout<<'B'<<endl;
                else cout<<'C'<<endl;

            }

        }

    }

   return 0;
}