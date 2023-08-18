// If after we do the factorization of n with {2, 3, 5}
// The resultant number is not 1 than it has other prime
// factors compounding the given number
bool isUgly(int n) {
    if (n < 1) return false;

    int uglyPrimes[3] = { 2, 3, 5 };
    for (int number : uglyPrimes) {
        while (n % number == 0) n /= number;
    }
    return n == 1;
}
