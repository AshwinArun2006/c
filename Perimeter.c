#include<stdio.h>
int main(){
	float l,b;
//	Perimeter of ractangle
	printf("Perimeter of rectangle\n");
	printf("Enter the lenght and bredth :");
	scanf("%f%f",&l,&b);
	printf("Perimeter = %.2f",2*(l+b));
	
//	Area of reactangle
	printf("\n\nArea of rectangle\n");
	printf("Enter the lenght and bredth :");
	scanf("%f%f",&l,&b);
	printf("Area = %.2f",l*b);
	return 0;
}

