// from the other above here is a code that will print the the even numbers.
#include <stdio.h>

int main(void) {
    int limit = 4000000;
    int fib1 = 1, fib2 = 2;
    int sum = 0;

    while (fib1 <= limit) {
        if (fib1 % 2 == 0) {
            sum += fib1;
        }

        int next_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("The sum of even-valued terms in the Fibonacci sequence below 4,000,000 is: %d\n", sum);

    return (0);
}
