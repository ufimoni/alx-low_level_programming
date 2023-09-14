// A code that writes function ten times although it is used with a for loop
#include <stdio.h>
// here we write a function to carry out the task.
//i will call my function the_call.

void the_call(){
  char alph = "N"
	int j;
  printf("Welcome");
  // here we use the for loop
 for (j=0; j<10; j++){
	 printf("%s\n",alph++);
 }
}
 // here we call the function.
 int main(void){
   the_call();
   return(0);
 }
// end of code


