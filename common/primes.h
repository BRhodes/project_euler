#ifndef PRIMES_H
#define PRIMES_H

class Primes {
    public:
        Reset();

        Is_Prime(long number);

        Generate(long highest);

    private:
        vector<long> primes;
        long generated;
}

#endif
