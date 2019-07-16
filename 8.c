#include <stdio.h>
int main()
{
	int a,b,temp;
      printf("Enter first number: ");
      scanf("%d",&a);
      printf("Enter second number: ");
      scanf("%d",&b);
      temp=a;
      a = b;
      b = temp;
      printf("\nAfter swapping, FirstNumber = %d\n",a);
      printf("After swapping, secondNumber = %d\n",b);
      return 0;
}
     
