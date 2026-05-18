#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

      int a,k;
      cin>>a>>k;
      string s;
      cin>>s;

      int n = s.size() - k;

      unordered_map<char, int> mp;
      for(int i = 0; i<s.size(); i++){

         mp[s[i]]++;
         
      }

      int count = 0;
      for(auto i: mp){

         if(i.second % 2 != 0){
            count++;
         }

      }

      if(k+1 >= count) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }

   return 0;
}