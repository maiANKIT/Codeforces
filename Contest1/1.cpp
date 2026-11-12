#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        string s, t;
        cin >> s >> t;

        unordered_map<char, int> mp2;

        for (int i = 0; i < t.size(); i++)
        {
            mp2[t[i]]++;
        }

        // unordered_map<char, int> mp;

        // for(int i = 0; i<s.size(); i++){
        //     mp[s[i]]++;
        // }

        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {

            if (mp2.count(s[i]) && mp2[s[i]] > 0)
            {
                mp2[s[i]]--;
                if (mp2[s[i]] == 0)
                {
                    mp2.erase(s[i]);
                }
            }
            else
                ans += s[i];
        }

        sort(ans.begin(), ans.end());
        string z = "isx";

        if (mp2.size() > 0)
            cout << "NO" << endl;
        else
        {

            if (ans == z)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}