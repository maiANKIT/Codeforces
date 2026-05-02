#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n, m;
        cin>>n>>m;

        string a, b;
        cin>>a>>b;

        int i = 0;
        int j = 0;

        while(j<b.size()){

            if(a[i] == b[j]){
                i++;
                j++;
            }
            else if(a[i] != b[j]){
                j++;
            }
        }

        cout<<i<<endl;

    }

   return 0;
}