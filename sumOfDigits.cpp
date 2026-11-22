#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    long long sum = 0;
    int count = 0;

    if(s.size() > 1) count++;

    for(int i = 0; i<s.size(); i++){
        sum += s[i] - '0';

        if(i == s.size() - 1 && sum > 9){
            i = -1;
            s = to_string(sum);
            sum = 0;
            count++;
        }

    }

    cout<<count<<endl;

   return 0;
}