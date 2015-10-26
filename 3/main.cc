#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> primes;
    int limit = sqrt(600851475143) + 1;
    vector<bool> pot_primes (limit, true);
    pot_primes[0] = false;
    pot_primes[1] = false;

    for (int p = 2; p < limit; p++) {
        if (pot_primes[p]) {
            for (int i = 2*p; i < limit; i+=p) {
                pot_primes[i] = false;
            }
        }
    }
    int ans = 1;
    long number = 600851475143;
    for (int i = 2; i <= number; i++) {
        if (pot_primes[i]) {
            if (number % i == 0) {
                number /= i;
                ans = i;
                i--;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
