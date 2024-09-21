//User Input

#include<stdio.h>
#include<string.h>

int main(){

int myAge;
char name[30];

printf("Enter Your Name and Age here___\n");

// get save the number from the user 
scanf("%s", &name);
scanf("%d", &myAge);

printf("%s is  %d year old " ,name ,myAge);

//Example for understanding!

int Age;
char voterName;

printf("Enter Your Name \n");
printf("Enter Your Age \n");
scanf("%d", &Age);
scanf("%s", &voterName);

if(Age <18)
{
	printf("you are not eligible for voting \n");
}
else if(Age>= 18 && Age<=75)
{
	printf("You are eligible for voting");
}
else{
	printf("You are Senior Citizen(75+)");
}

}