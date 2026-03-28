#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    cin>>n;

    string s;
    cin>>s;

    // cout<<"1: "<<s[0] - 'a'<<" 2: "<<s[1] - 'a'<<" 3: "<<s[2] - 'a'<<endl;

    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        if((s[0] - 'a' == 32 || s[0] - 'a' == 0) && (s[1] - 'a' == 32 || s[2] - 'a' == 0) && (s[2] - 'a' == 32 || s[2] - 'a' == 0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

   return 0;
}