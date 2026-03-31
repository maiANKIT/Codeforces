#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string a = "I hate";
    string b = "I love";

    string c = "";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        
            c = c + b + " ";
        
        else
        
            c = c + a + " ";
        

        if(i != n)
            c = c + "that ";
        
    }

    cout << c + "it";

    return 0;
}