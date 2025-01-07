#include<stdio.h>
int main()
{
	int h,m;
	printf("Enter the minutes : ");
	scanf("%d",&m);
	h=m/60;
	m=m%60;
	if(h==0){
		printf("%d minutes",m);
	}
	if(m==0){
		printf("%d hour",h);
	}
	if(h!=0&&m!=0)
		printf("Time = %d hour and %d minutes",h,m);
	return 0;
}

