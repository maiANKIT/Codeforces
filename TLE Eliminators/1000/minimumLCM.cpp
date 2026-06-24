#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;

        long long mini = INT_MAX;

        long long c = 1;
        long long d = 1;

        for (long long i = 1; i <= sqrt(n); i++)
        {

            long long a = i;
            long long b = n - a;

            if (a > b)
                break;
            else if(b%a != 0) continue;
            else{

                if(mini > b){
                    mini = b;
                    c = a;
                    d = b;
                }

            }
            
        }
        cout<<c<<" "<<d<<endl;
    }

    return 0;
}