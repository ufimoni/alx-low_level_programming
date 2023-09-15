// Here is a Funtion that prints the numbers, from 0 to 9 followed by a new line.
#include "main.h"

void _putchar(char c);

void print_most_numbers(void) {
    for (int i = 0; i <= 9; i++) {
        if (i != 2 && i != 4) {
            _putchar('0' + i);
        }
    }
    _putchar('\n');
}
