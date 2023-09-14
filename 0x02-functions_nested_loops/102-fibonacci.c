// here is a program that prints the first 50 fibonacci numbbers starting with 1 and 2
#include <stdio.h>

void print_fibonacci(int n) {
    unsigned long long int fib1 = 1, fib2 = 2;

    printf("1, 2");
    for (int i = 3; i <= n; i++) {
        unsigned long long int fib = fib1 + fib2;
        printf(", %llu", fib);
        fib1 = fib2;
        fib2 = fib;
    }
    printf("\n");
}

int main(void) {
    int count = 50;
    print_fibonacci(count);
    return (0);
}
