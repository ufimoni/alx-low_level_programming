// Here is function that prints a triangle
// with # sign.
#include "main.h"

void _putchar(char c);

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= i; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
