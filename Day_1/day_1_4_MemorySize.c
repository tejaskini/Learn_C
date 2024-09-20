
//size of the datatypes
#include <stdio.h>
int main()
{

int myInt;
float myFloat;
double myDouble;
char myChar;

printf("size of int : %lu\n", sizeof(myInt));
printf("size of float :%lu\n", sizeof(myFloat));
printf("size of double :%lu\n", sizeof(myDouble));
printf("size of char :%lu\n", sizeof(myChar));

// NOTE: sizeof operator to return a long unsigned int (%lu)
}