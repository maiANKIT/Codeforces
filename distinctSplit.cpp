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

        int maxi = 0;

        for(int i = 0; i<n; i++){

            set<char> s1, s2;
            s1.insert(s.begin(), s.begin() + i + 1);

            s2.insert(s.begin() + i + 1, s.end());

            int sum = s1.size() + s2.size();

            maxi = max(maxi, sum);


        }

        cout<<maxi<<endl;

    }

   return 0;
}