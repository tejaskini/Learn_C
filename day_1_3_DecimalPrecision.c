// Decimal Precision in C

#include<stdio.h>

int main(){
float myFloatNum = 15.895;

printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
printf("%.1f\n", myFloatNum); // Only show 1 digit
printf("%.2f\n", myFloatNum); // Only show 2 digits
printf("%.4f", myFloatNum);   // Only show 4 digits

return 0;
}
