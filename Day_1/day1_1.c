// simple first program in C.
#include<stdio.h>

int main()
{
	
printf("Hello World \n");

// variables
// int
int myInt = 12;
//printf(myInt); // nothing happens, we cannot directly print the variables (Format Specifier should be used)

printf("%d \n", myInt);

// float
float myFloat = 33.3;
printf("%f \n", myFloat );

// multiple variable we can use over here.
int x,y,z;
x = y = z = 40;
printf("%d \n", x + y + z);

//char 
char myChar = 'a';
printf("%c \n", myChar);

// Calculate the area of the Rectangel
int width = 10;
int height = 5;
int area = width * height;
printf("area of rectangle is : %d \n", area);


//return 0;
}