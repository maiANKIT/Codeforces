#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;

    string t;
    cin >> t;

    for (int i = 0; i < t.size() / 2; i++)
    {
        swap(t[i], t[t.size() - i - 1]);
    }

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}