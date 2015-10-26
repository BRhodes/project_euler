#include <iostream>

using namespace std;

int main() {
    char c;
    int a = 1;
    int b = 2;
    long sum = 0;
    while ( a < 4000000 ) {
        cout << a << "\t" << b << "\t" << sum << endl;
        if (a == ((a >> 1) << 1)) {
            sum += a;
        }
        b = a+b;
        a = b-a;
    }
    cout << sum << endl;
    return 0;
}
