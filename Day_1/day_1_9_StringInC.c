// Special Charecters and String Function in C.
#include<stdio.h>
#include<string.h>
int main(){
 char txt[] = "We are the so called \\Vikings\\ from the north";


	//Special Charecters
	printf("%s" , txt); // double quotes in string dfdf \"djfdfd"\ dfdffd
	printf("%s", txt); // Single quotes in string dfdfd \'dfdfds\' dfdf
	printf("%s", txt); // backshlash in the string \\dfdf\\dfdf
	
	printf("\n");
	//String Function 
	
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabets));
	printf("\n");
	printf("%d", sizeof(alphabets));
	
	//concatenate strings
		printf("\n");
	char str1[] = "Hello";
	char str2[] = "Tejas";
	
	strcat(str1,str2);
	printf("%s",str1);
	





}