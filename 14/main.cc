#include <iostream>
#include <map>

using namespace std;

map<long, long> collatz;

long Collatz(long i) {
    if (collatz.find(i) != collatz.end()) {
        return collatz[i];
    } else {
        if (i % 2 == 0) {
            return collatz[i] = Collatz(i/2) + 1;
        } else {
            return collatz[i] = Collatz(3*i+1) + 1;
        }
    }
}


int main() {
    collatz[1] = 0;
    long max = 1;
    long index = 1;

    for (long i = 1; i < 1000000; i++) {
        if (Collatz(i) > max) {
            max = Collatz(i);
            index = i;
        }
    }

    cout << max << endl;
    cout << index << endl;
    for (map<long, long>::iterator it = collatz.begin(); it != collatz.end(); it++) {
        if ((it->first) <= 0) {
            cout << it->first << endl;
        }
    }
    return 0;
}
