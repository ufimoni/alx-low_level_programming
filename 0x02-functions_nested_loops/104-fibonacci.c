#include "main.h"
// coding in fibonacci
printf("Hello I am coding in fibonacci");

void fibonacci(int n) {
    int fib[n];
    fib[0] = 1;
    fib[1] = 2;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", fib[i]);
    }
}

int main(void) {
    fibonacci(98);
printf("This is a nice code in fibonacci");
    return 0;
}

