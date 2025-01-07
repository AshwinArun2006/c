#include<stdio.h>
int main(){
	int a,b,c,m;
	printf("Enter three numbers :");
	scanf("%d%d%d",&a,&b,&c);
	m=(a>b)?a:b;
	m=(m>c)?m:c;
	printf("Largest number is %d",m);
	return 0;
}

