#include<stdio.h>
int main()
{
	//to find size of int, float, double, char
	int a;
	float b;
	double d;
	char c;
	long double ld;
	printf("Size of Integer is %ld\n",sizeof(a));
	printf("Size of Float is %ld\n",sizeof(b));
	printf("Size of Charecter is %ld\n",sizeof(c));
	printf("Size of Double is %ld\n",sizeof(d));
	printf("Size of Long Double is %ld\n",sizeof(ld));
}
