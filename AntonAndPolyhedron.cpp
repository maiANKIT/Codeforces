#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int count = 0;

    while (n--)
    {

        string x;
        cin >> x;

        if (x == "Tetrahedron")
            count += 4;
        else if (x == "Cube")
            count += 6;
        else if (x == "Octahedron")
            count += 8;
        else if (x == "Dodecahedron")
            count += 12;
        else if (x == "Icosahedron")
            count += 20;
    }

    cout << count;

    return 0;
}