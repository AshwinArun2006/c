#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in celsius : ");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("Temperature in farenheit = %.1f",f);
	return 0;
}

