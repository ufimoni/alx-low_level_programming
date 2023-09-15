//  to print an interger 
//  but as a funtion
#include <stdio.h>

void _putchar(char c);

void print_digit(int n) {
    if (n > 9) {
        print_digit(n / 10);
    }
    _putchar('0' + (n % 10));
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
  
    if (n == 0) {
        _putchar('0');
    } else {
        print_digit(n);
    }
}
