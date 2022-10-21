#include<stdio.h>
void main(){

	int x = 10;
	char ch = 'A';
	
	int *ptr1 = &x;
	char *ptr2 = &ch;
	
	printf("%p\n",ptr1);	//0x101
	printf("%p\n",ptr2);	//0x100 (Charector always gets memory before integer)
	
	printf("%d\n",*ptr1);	//10
	printf("%d\n",*ptr2);	//65
}
