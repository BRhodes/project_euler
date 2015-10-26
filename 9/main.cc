#include <iostream>

#include <map>

using namespace std;

// from:
//  a + b + c = 1000
//  c = 1000 - a - b
// put result into:
//  a^2 + b^2 = c^2
//  a^2 + b^2 = (1,000 - a - b)^2
//  a^2 + b^2 = 1,000,000 - 2,000a - 2,000b + 2ab + a^2 + b^2
//          0 = 1,000,000 - 2,000a - 2,000b + 2ab
//          0 = 500,000 - 1,000a - 1,000b + ab
//  1000b - ab = 500,000 - 1,000a
//  (1000 - a)b = 500,000 - 1,000a
//            b = (500,000 - 1,000a) / (1000 - a)
void GetBC(int a, int & b, int & c) {
    b = (500000 - 1000 * a) / (1000 - a);
//    b = (1000*(a-500))/(a-1000);
    c = 1000 - a - b;
}

void Check(int a, int b, int c) {
    if (a > 0 and b > a and c > 0 and a*a + b*b == c*c) {
        cout << a << " " << b << " " << c << endl;
        cout << a * b * c << endl;
    }
}

int main() {
    int a = 1;
    int b;
    int c;
    while (a < 1000) {
        GetBC(a, b, c);
        Check(a, b, c);
        a++;
    }

    return 0;
}
