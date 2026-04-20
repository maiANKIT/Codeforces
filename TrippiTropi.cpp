#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {

        string s1, s2, s3;
        cin>>s1>>s2>>s3;

        string x = "";

        x = x + s1[0] + s2[0] + s3[0];

        cout << x << endl;
    }

    return 0;
}