//Conditions in C

#include <Stdio.h>
int main(){
// if

int a = 10, b=25, c=55;

if(a<b)
{
	printf("a is less than b\n");
}

// if-else
	
if(a>b){
	printf("A greater\n");
	
}else{
	printf("B greater\n ");
}

// else if ladder

if(a>b){
	printf("A greater\n");
	
}else if(c > b){
	printf("C greater than B\n");
}else {
	printf("opps! A and B both are smaller that C\n");
}


// Ternary or short hand
// conditon  ? True : fasle
  (c > a)? printf("True"):printf("False");
return 0;

}