#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "fibonacci_lib.h"

int main() {
    struct timespec start = {0,0};
    struct timespec end = {0,0};
    clock_gettime(CLOCK_REALTIME, &start);

    long long n = 2e9;
    long long result = 0;
    result = fib(n);

    printf("%lld\n", result);

    clock_gettime(CLOCK_REALTIME, &end);
    double dt = ((double)end.tv_sec + 1.0e-9*end.tv_nsec) - ((double)start.tv_sec + 1.0e-9*start.tv_nsec);
    printf("%f\n", dt);
    return 0;
}