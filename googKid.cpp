#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        
        long long be = 0;
        for(int i=0; i<n; i++) {
            
            vector<int> b = a;
            b[i]++;
            long long prod = 1;
            for(int x : b) prod *= x;
            be = max(be, prod);
            
        }
        cout << be << endl;
    }
    return 0;
}
