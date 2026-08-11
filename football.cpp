#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    unordered_map<string, int> mp;

    for(int i = 0; i<n; i++){

        string s;
        cin>>s;
        mp[s]++;

    }

    string ans = "";
    int maxi = 0;

    for(auto i: mp){

        if(i.second > maxi){

            maxi = i.second;
            ans = i.first;

        }

    }

    cout<<ans;

   return 0;
}