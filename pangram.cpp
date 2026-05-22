#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n < 26)
    {
        cout << "NO";
    }
    else
    {

        string a = "abcdefghijklmnopqrstuvwxyz";

        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                mp[s[i] + 32]++;
            }
            else
            {
                mp[s[i]]++;
            }

        }

        if(mp.size() < 26){
            cout<<"NO";
        }
        else{

            cout<<"YES";

        }

    }

    return 0;
}