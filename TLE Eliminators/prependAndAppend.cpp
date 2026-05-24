#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        if((s[0] == s[s.size() - 1])) cout<<s.size()<<endl;
        else{

            int count = 0;
            int i = 0;
            int j = s.size() - 1;

            while(i<j){

                if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
                    i++;
                    j--;
                    count = count + 2;
                }
                else{
                    break;
                }

            }

            cout<<s.size() - count<<endl;

        }

    }

   return 0;
}