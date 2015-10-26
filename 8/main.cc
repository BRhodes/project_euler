#include <iostream>
#include <list>

using namespace std;

//const int ADJ_COUNT = 3;

void GetFactor(list<int> & factors, long & sum) {
    char factor;
    cin >> factor;
    factor = factor - '0';
    if (factor == 0) {
        factors.clear();
        sum = 1;
    } else {
        factors.push_front(factor);
        sum *= factor;
    }

    return;
}

void Score(long & max, long & sum) {
    if (sum > max) {
        max = sum;
    }

    return;
}

void RemoveOldestFactor(list <int> & factors, long & sum) {
    sum /= factors.back();
    factors.pop_back();

    return;
}

int main() {
    list<int> factors;
    long sum = 1;
    long max = 0;

    GetFactor(factors, sum);
    while (cin) {
        if (factors.size() == 13) {
            Score(max, sum);
            RemoveOldestFactor(factors, sum);
        }
        GetFactor(factors, sum);
    }
    cout << max << endl;

    return 0;
}/*
    long product = 1;
    char factors[ADJ_COUNT];
    int read = 0;
    int read_since_zero = 0;
    int max = 0;

    for (int i = 0; i < ADJ_COUNT; i++) {
        factors[i] = '1';
    }
    
    product /= factors[read % ADJ_COUNT] - '0';
    cin >> factors[read % ADJ_COUNT];
    while (cin) {
        // Zero Clause
        if (factors[read % ADJ_COUNT] == '0') {
            for (int i = 0; i < ADJ_COUNT; i++) {
                factors[i] = '0';
            }
            product = 1;
            read_since_zero = 0;
        }

        product *= factors[read % ADJ_COUNT] - '0';
        read_since_zero++;
        if (product > max and read_since_zero >= ADJ_COUNT) max = product;
        cout << factors[read %ADJ_COUNT] << "\t" << product << "\t" << max << "\t" << read_since_zero << endl;
        read++;
        product /= factors[read % ADJ_COUNT] - '0';
        cin >> factors[read % ADJ_COUNT];
    }
    cout << max<< endl;

    

    return 0;
}*/
