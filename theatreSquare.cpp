#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, m, a;
    cin>>n>>m>>a;

    long long n1 = n/a, n2 = n%a;
    long long m1 = m/a, m2 = m%a;


    if(n2 > 0) n1 += 1;
    long long sum = n1;

    sum *= m1;

    if(m2 > 0) sum += n1;

    cout<<sum;

   return 0;
}