#include<stdio.h>
int main(){
	int roll_no,age,encode,decode;
	printf("Enter your age :");
	scanf("%d",&age);
	printf("Enter your roll number :");
	scanf("%d",&roll_no);
//	encode
	encode=roll_no^age;
	printf("Encoded number : %d\n\n",encode);
//	decode
	printf("Decoded\n");
	decode = encode^roll_no;
	printf("Decoded age = %d\n",decode);
	decode = encode^age;
	printf("Decoded roll number = %d\n",decode);
	return 0;
}

