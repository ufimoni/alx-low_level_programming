// Here is Funtion that Prints number from 0 to 9 followed by a new line.
#include <stdio.h>

void _putchar(char c);

void print_numbers(void) {
// we combine intergers and strings.
	char numbers[] = "0123456789\n";
    int length = sizeof(numbers) - 1;  // Exclude the null terminator

    for (int i = 0; i < length; i++) {
        _putchar(numbers[i]);
    }
}

