#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\nAfter Swapping Firstnumber=%d",a);
	printf("\nAfter Swapping Secondnumber=%d",b);
	printf("\n");
	return 0;
}

