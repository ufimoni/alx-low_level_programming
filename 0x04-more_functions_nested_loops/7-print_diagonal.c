// a Funtion that will draw a diagonal line on a terminal
#include "main.h"

void _putchar(char c);

void print_diagonal(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
}
