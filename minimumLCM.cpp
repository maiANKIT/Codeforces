#include <bits/stdc++.h>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{

    long long t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        long long a = 1;
        long long b = n - a;
    
        long long ansA = a, ansB = b;

        long long mini = (a / gcd(a, b)) * b;

        while(a <= b){

            long long lcm = (a / gcd(a, b)) * b;

            if(mini > lcm){

                mini = lcm;
                ansA = a;
                ansB = b;

            }

            a++;
            b--;

        }

        cout<<ansA<<" "<<ansB<<endl;

    }

   return 0;
}