#include<stdio.h>
int main(){
	int i,j,a[20][20],b[20][20],c[20][20];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the value to be inserted in the location %d,%d;",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the value to be inserted in the location %d,%d;",i,j);
			scanf("%d",&b[i][j]);	
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	
	
			
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j] =a[i][j] + b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
