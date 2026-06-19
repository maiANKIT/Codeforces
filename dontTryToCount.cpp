#include <iostream>
#include <string>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        bool a = 0;
        int count = 0;

        int size = s.size();
        bool b = 0;

        while (a != 1 && size >= count)
        {
            
            size_t pos = x.find(s);
            if (pos != string::npos)
            {
                a = 1;
                break;
            }

            if(size == count) b = 1;

            count++;
            x = x + x;
        }

        if(b == 1) cout<<-1<<endl;
        else
            cout << count << endl;
    }

    return 0;
}