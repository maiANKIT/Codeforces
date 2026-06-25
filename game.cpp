    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {

        int n;
        cin >> n;

        bool x = 0;

        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        if (n % 2 == 0)
        {
            cout<<b[n/2 - 1];
        }
        else{

            cout<<b[n/2];
        }

        return 0;
    }