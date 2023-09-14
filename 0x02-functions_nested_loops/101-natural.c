// here is program that calculates and prinmts the sum of 3 and 5 below 1024
#include <stdio.h>

int main(void) {
    int limit = 1024;
    int sum = 0;

    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);

    return (0);
}
