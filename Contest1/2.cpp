#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int r, s, p;
        cin >> r >> s >> p;

        int sum = r + s + p;

        int a = 0, b = 0, c = 0;
        string ans = "";

        // if (sum % 2 == 0)
        // {

        while (ans.size() < sum)
        {
            if (s >= p)
            {
                ans += 'R';
            }
            else if (p >= r)
            {
                ans += 'S';
            }
            else
            {
                ans += 'P';
            }
        }

        // while (ans.size() < sum)
        // {

        //     if (a < r)
        //     {
        //         ans += 'S';
        //         a++;
        //     }
        //     else if (b < s)
        //     {
        //         ans += 'P';
        //         b++;
        //     }
        //     else if (c < p)
        //     {
        //         ans += 'R';
        //         c++;
        //     }
        // }
        // }
        // else
        // {

        //     while (ans.size() < sum / 2)
        //     {

        //         if (a < r)
        //         {
        //             ans += 'P';
        //             a++;
        //         }
        //         else if (b < s)
        //         {
        //             ans += 'R';
        //             b++;
        //         }
        //         else if (c < p)
        //         {
        //             ans += 'S';
        //             c++;
        //         }
        //     }

        //     while (ans.size() < sum)
        //     {

        //         if (ans.size() == sum - 1)
        //             break;

        //         if (a < r)
        //         {
        //             ans += 'S';
        //             a++;
        //         }
        //         else if (b < s)
        //         {
        //             ans += 'P';
        //             b++;
        //         }
        //         else if (c < p)
        //         {
        //             ans += 'R';
        //             c++;
        //         }
        //     }

        //     if (a != r)
        //     {
        //         ans += 'R';
        //     }
        //     else if (b != s)
        //     {
        //         ans += 'S';
        //     }
        //     else if (c != p)
        //     {
        //         ans += 'P';
        //     }
        // }

        cout << ans << endl;

        // rock->paper
        // scissor->rock
        // paper->scissor
    }

    return 0;
}