#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    unordered_map<char, int> mp;

    for(int i = 0; i<s.size(); i++){

        mp[s[i]]++;

    }

    int count = 0;
    for(auto i: mp){

        if(i.first == ' ' || i.first == ',' || i.first == '{' || i.first == '}'){
            continue;
        }
        else{
            count++;
        }

    }

    cout<<count;

   return 0;
}