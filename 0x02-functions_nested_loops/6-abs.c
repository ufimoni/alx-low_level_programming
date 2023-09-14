// a c program to print the absolute value of an interger
int _abs(int num){
if (num < 0){
return -num;
}
else
{
return num;
}
}
int main(void){
int num;
printf("Please enter a number");
scanf("%d",&num);
// now we call the the function or here is where the code lied from
int abs = num;
printf("The absolute value of %d is %d\n",abs);
return (0);
}

