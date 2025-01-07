#include<stdio.h>
int main(){
	float r;
	
//	Area of circle
	printf("Area of a circle\n");
	printf("Enter the radius : ");
	scanf("%f",&r);
	printf("Area = %.2f",3.14*(r*r));
	
//	Perimeter of circle
	printf("\n\nPerimeter of a circle\n");
	printf("Enter the radius :");
	scanf("%f",&r);
	printf("Perimeter = %f",2*3.14*r);	
	return 0;
}

