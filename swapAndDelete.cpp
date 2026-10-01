#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        // string x = s;

        // reverse(s.begin(), s.end());

        // int count = 0;

        int z = 0, o = 0;

        for (int i = 0; i < s.size(); i++)
        {

            // if(s[i] != x[i]) count++;

            if (s[i] == '0')
                z++;
            else
                o++;
        }

        int ans = 0;
        for(int i = 0; i<s.size(); i++){

            if(s[i] == '1' && z > 0){
                ans++;
                z--;
            }
            else if(s[i] == '0' && o > 0){
                ans++;
                o--;
            }
            else break;

        }

        cout<<s.size() - ans<<endl;


    }


return 0;
}