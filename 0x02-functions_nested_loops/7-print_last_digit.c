// a program that will the last digits of a number.
#include "main.h"
#include <stdio.h>
#include<stdlib.h>
// here we create thr function
int print_last_digit(int num){
int last_digit = abs (num % 10);
return last_digit;
}

int main(void){
int num;
printf("Welcome please enter any interger");
scanf("%d",&num);
int last_digit = prinr_last_digit(num);
printf("Hello\n The last digit of %d is %d\n",num, last_digit);
return(0);
}

