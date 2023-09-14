// a code that checks if any letter is alphabets.
#include "main.h"
int _isalpha(char c)
if (c >="A"|"a" && c <= "Z"|"z")
return 1;
}
// means this is alphanumeric
else
return 0;
// measn ot true;
int main(void){
// so we will declare any_alpha as our container
char any_alpha;
printf("Welcome\n please any character or any alphabet\n :%c",any_alpha);
// we use the if statement again
//
    if (_isalpha(any_alpha));{
    printf("you have entered an alphabet",any_alpha);
    }
else{
printf(" you entrerd a wrong element\n please try again",any_alpha);

}
return 0;
}
