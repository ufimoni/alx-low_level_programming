// Here is a Function that draws a straight line in the terminal.
#include "main.h"

void _putchar(char c);

void print_line(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        for (int i = 0; i < n; i++) {
            _putchar('_');
        }
        _putchar('\n');
    }
}
