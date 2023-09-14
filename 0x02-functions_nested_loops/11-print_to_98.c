// a program that prints all natural numbers from n to 98
#include "main.h"

void print_to_98(int n) {
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            printf("%d\n",i);
            if (i != 98) {
                printf(", ");
            }
        }
    } else {
        for (int i = n; i >= 98; i--) {
            printf("%d\n" i);
            if (i != 98) {
                printf(", ");
            }
        }
    }
    printf("%d\n");
}

int main() {
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    print_to_98(number);
    return 0;
}
