#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int count = 1;
    int maxi = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        
        
        if (s[i] == s[i + 1])
            count++;
        else
        {
            count = 1;
        }

        maxi = max(maxi, count);
        if(maxi >= 7) break;
    }

    if (maxi >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}