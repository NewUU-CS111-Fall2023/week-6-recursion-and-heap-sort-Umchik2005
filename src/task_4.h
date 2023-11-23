#include <cmath>

bool isNumberPrime(int n, int divisor) {
    if (n <= 1) {
        return false;
    }
    if (divisor == 1) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }

    return isNumberPrime(n, divisor - 1);
}

bool isPrime(int n) {
    int divisor = static_cast<int>(sqrt(n));
    return isNumberPrime(n, divisor);
}