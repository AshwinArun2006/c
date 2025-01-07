#include<stdio.h>
int main()
//	logic 1: Using temporary variable		
{
	int a,b,c;
	printf("logic 1 : Using temporary variable\n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a = %d and b = %d \n\n",a,b);
//  logic 2 : Using addition
	printf("logic 2 : Using addition\n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d and b = %d\n\n",a,b);
//	logic 3 : Using bitwise xor
	printf("logic 3 : Using bitwise Xor\n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a = %d and b = %d\n",a,b);
	return 0;
}

