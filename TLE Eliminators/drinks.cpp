#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int b = n;

    int sum = 0;
    while(n--){

        int a;
        cin>>a;

        sum = sum + a;

    }
    
    double result = static_cast<double>(sum) / b;

    cout << fixed << setprecision(12) << result << endl;

   return 0;
}