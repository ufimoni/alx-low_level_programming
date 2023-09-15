// Here is a Funtion that prints a Square,
#include "main.h"

void _putchar(char c);

void print_square(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
