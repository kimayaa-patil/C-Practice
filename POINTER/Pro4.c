#include<stdio.h>

int a = 10;	//in Non-BSS in Data section
char b = 'A';	//in Non-BSS in Data section

void main(){

	float x = 25.5;	//in main
	double d = 35.555;	//in main
	
	int *ptr1 = &a;
	char *ptr2 = b;	//Warning-
	float *ptr3 = &x;
	double *ptr4 = &d;
	
	printf("%p\n",ptr1);	//0x5464
	printf("%p\n",ptr2);	//0x41 [ASCII value of (A-65) / 16]
	printf("%p\n",ptr3);	//0x6543
	printf("%p\n",ptr4);	//0x5453
	
	printf("%d\n",*ptr1);	//10
	printf("%c\n",*ptr2);	//Segmentation foult (core dumped)
	printf("%f\n",*ptr3);	//25.5
	printf("%lf\n",*ptr4);	//35.555
}
