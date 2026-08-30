#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    size_t posAB = s.find("AB");
    size_t posBA = s.find("BA");

    bool ok = false;

    if (posAB != string::npos) {
        if (s.find("BA", posAB + 2) != string::npos) ok = true;
    }
    if (posBA != string::npos) {
        if (s.find("AB", posBA + 2) != string::npos) ok = true;
    }

    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
