#include<stdio.h>
int main()
{
//to find quotient and reminder of two integers
	int a,b,rem=0,q=0;
	printf("Enter number one= ");
	scanf("%d",&a);
	printf("Enter number two= ");
	scanf("%d",&b);
	rem=a%b;
	printf("Remender= %d \n",rem);
	q=a/b;
	printf("Quotient= %d \n",q);
	return 0;
}
