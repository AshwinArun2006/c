#include <stdio.h>
int main(){
	int i,j,rows,coloumn;
	int a[50][50];
	printf("Enter the Number of rows:");
	scanf("%d",&rows);
	printf("Enter the Number of coloumns:");
	scanf("%d",&coloumn);
	for(i=0;i<rows;i++){
		for(j=0;j<coloumn;j++){
			printf("Enter the value to be inserted in the location %d,%d;",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<coloumn;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
