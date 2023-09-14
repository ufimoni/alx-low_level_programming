// a code to check whether a code is lowercase.
#include "main.h"
int _islower(char a){
// we use the if statement
// we pick from the range a to z
if (a >="a" && a <= "z"){
return 1;
// means this is true
else {
return 0;
// this is false.
int main(void){
char letter;
printf"Welcome\n please enter a character: %c",letter);
// using the if statement
if (_islower(letter)){
printf("%c Successful, this is a Lowercase alphabet",letter);
// this is lower case or true.
else {
printf("%c Error this is not a lowecase alphabtet",letter);
}
return(0);
}
