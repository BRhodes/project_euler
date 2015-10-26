#include <iostream>

using namespace std;

bool isPal(int a) {
    cout << a << endl;
    bool rv = true;
    string s = to_string(a);
    int size = s.size();
    for (int i=0; i < size/2 and rv; i++) {
        if (s[i] != s[size-1-i])
            rv = false;
    }
    return rv;
}

int main() {
    int best = 0;
    int a, b;
    for (int i = 998; i > 99; i--) {
        for (int j = 999; j >= i; j--) {
            if (isPal(i*j)) {
                if (best < i*j) {
                    best = i*j;
                    a = i;
                    b = j;
                }
            }
        }
    }
    cout << a << endl << b << endl << a*b << endl;
}
