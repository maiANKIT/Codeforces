#include <iostream>
using namespace std;

int main() {
    int x = 10;
    char c = 'A';
    float f = 3.14;

    cout << "Address of x: " << &x << endl;
    cout << "Address of c: " << (void*)&c << endl;
    cout << "Address of f: " << &f << endl;

    return 0;
}