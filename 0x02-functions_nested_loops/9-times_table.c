// A c program or a function for 9 times table.
#include <stdio.h>
// here we call the funtion as according to each of them.
void times_table(void) {
    int multiplier = 0;
// using a while loop
// to keep until it get to 9.
    while (multiplier <= 10) {
        int result = 9 * multiplier;
        printf("9 x %d = %d\n", multiplier, result);
        multiplier++;
    }
}

int main(void) {
    times_table();
    return (0);
}
