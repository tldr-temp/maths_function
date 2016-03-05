#include<stdio.h>
 
int main()
{
  	int a, b , add, sub, mul;
  	float divide;
 
  	printf("Enter first number: ");
  	scanf("%d", &a);
 
  	printf("\nEnter second number: ");
  	scanf("%d", &b);
 
  	add=(a+b);
  	printf("\nAddition of first and second number is= %d",add);
  
 	sub=(a-b);
 	printf("\nSubtraction of second  from first = %d",sub);

 	mul=(a*b);
  	printf("\nMultiplication of first and second number=%d",mul);
 
  	divide=a/(float)b;
  	printf("\nDivision of first number by second number =%.2f",divide);

	printf("%i / %i = %i\n", a, b, a/b);

	return 0;
}
