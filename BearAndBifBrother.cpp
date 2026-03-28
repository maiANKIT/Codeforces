#include <iostream>

using namespace std;

int main()
{

    int l;
    cin >> l;

    int b;
    cin >> b;

    int count = 0;
    while (l <= b)
    {
        l = l * 3;
        b = b * 2;
        count++;
    }

    cout<<count;

    return 0;
}