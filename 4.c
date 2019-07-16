#include<stdio.h>
int main()
{
	float a,b,mul=0;
	printf("Enter first float number= ");
	scanf("%f",&a);
	printf("Enter second float number= ");
	scanf("%f",&b);
	mul=a*b;
	printf("Multiplication of %f and %f is %f",a,b,mul);
	printf("\n");
	return 0;
}
