#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Temperature inCelsius = %.1f",c);
	return 0;
}

