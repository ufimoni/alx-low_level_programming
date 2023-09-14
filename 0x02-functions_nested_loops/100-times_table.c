// a program that prints n time table from 0 to 100
#include <stdio.h>

void print_times_table(int n) {
    if (n > 15 || n < 0) {
        return;
    }

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, (i * n));
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    print_times_table(number);
    return 0;
}
