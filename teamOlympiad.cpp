#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> n1;
    vector<int> n2;
    vector<int> n3;

    for (int i = 0; i < n; i++)
    {

        int a;
        cin >> a;

        if(a == 1) n1.push_back(i);
        else if(a == 2) n2.push_back(i);
        else n3.push_back(i);
    }

    int mini = min({n1.size(), n2.size(), n3.size()});

    cout << mini << endl;

    if(mini != 0)
    {
        int count = 0;
        
        while (count < mini)
        {
            cout<<n1[count] + 1<<" "<<n2[count] + 1<<" "<<n3[count] + 1<<endl;
            count++;
        }
    }

    return 0;
}