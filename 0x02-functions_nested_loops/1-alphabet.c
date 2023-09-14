// a code that prints the alphabets followed by a new line.
#include <stdio.h>
//int main(void){
void printalph(){
	char letter = "A";
	while ( letter < "Z"){
		printf("%c\n",letter);
		letter+1;
	}
}
int main(void)
{
	printalph();
return (0);
}
