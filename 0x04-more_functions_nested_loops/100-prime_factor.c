// To find the and prints the largest prime factor of the number 612852475143, followed by a new line.
#include <stdio.h>
#include <math.h>

unsigned long int get_largest_prime_factor(unsigned long int number) {
    unsigned long int largest_prime_factor = 0;
   // divisiblw by 2.
    while (number % 2 == 0) {
        largest_prime_factor = 2;
        number /= 2;
    }

    unsigned long int sqrt_number = sqrt(number);
    for (unsigned long int i = 3; i <= sqrt_number; i += 2) {
        while (number % i == 0) {
            largest_prime_factor = i;
            number /= i;
        }
    }

    if (number > 2) {
        largest_prime_factor = number;
    }

    return largest_prime_factor;
}
