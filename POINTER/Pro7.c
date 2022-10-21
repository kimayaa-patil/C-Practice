//OPERATION ON POINTER

//1. ADDITION OPERATION

#include<stdio.h>
void main(){
	
//CODE - 1 We Can Not Perform Addition Of Two Pointers
	
	int x = 10;
	int y = 20;
	
	int *ptr1 = &x;
	int *ptr2 = &y;
	
	printf("%d\n",*ptr1+*ptr2);	//30 (10+20)
	
	//printf("%p\n",ptr1+ptr2);	Error - invalid operands to binary + (pointr Addition Not Allowed)
	
	char ch1 = 'A';
	char ch2 = 'B';
	
	char *ptr3 = &ch1;
	char *ptr4 = &ch2;
	
	printf("%d\n",*ptr3+*ptr4);	//131 - (we perform Addition on Run Time) (otherwise it will be wrap up)	
	//printf("%p\n",ptr3+ptr4);	Error - invalid operands to binary + (pointr Addition Not Allowd)

	printf("--------------------------------------------------------------------\n\n");
	
	
	
	
//CODE - 2 We Can Perform Addition of Pointer with Integer
	
	int a = 30;			//Address - 100
	int b = 40;			//Address - 104
	
	int *ptr5 = &a;
	
	printf("%d\n",*ptr5);		//30
	
	printf("%d\n",*(ptr5+1));	//40 - (ValueAt(Address + 1 * sizeOf(DTP))) - (ValueAt(100 + 1 * 4)) = 104 (40)
	
	
	char ch3 = 'X';		//Address - 200
	char ch4 = 'Y';		//Address - 201
	char ch5 = 'Z';		//Address - 202
	
	char *ptr6 = &ch3;
	
	printf("%p\n",ptr6);		//0x200
	printf("%c\n",*ptr6);		//X
	
	printf("%p\n",(ptr6+1));	//0x201 - (ValueAt(Address + 1 * sizeOf(DTP))) - (ValueAt(200 + 1 * 1)) = 201 (0x201 - Hexadicimal Format)
	printf("%c\n",*(ptr6+1));	//Y - (ValueAt(Address + 1 * sizeOf(DTP))) - (ValueAt(200 + 1 * 1)) = 201 (Y)
	
	printf("%p\n",(ptr6+2));	//0x202 - (ValueAt(Address + 2 * sizeOf(DTP))) - (ValueAt(200 + 2 * 1)) = 202 (0x202 - Hexadicimal Format)
	printf("%c\n",*(ptr6+2));	//Z - (ValueAt(Address + 2 * sizeOf(DTP))) - (ValueAt(200 + 2 * 1)) = 202 (Z)
	
	printf("------------------------------------------------------------------\n\n");
	
	
	
//CODE - 3 We Can Not Perform Addition of Pointer with Double Or Float
	
	char ch6 = 'A';		//Address - 200
	char ch7 = 'B';		//Address - 201
	
	char *ptr7 = &ch6;
	
	printf("%p\n",ptr7);		//0x200
	printf("%c\n",*ptr7);		//A
	
	//printf("%p\n",(ptr2+1.5));	//Error - invalid operands to binary +	
	//printf("%c\n",*(ptr2+1.5));	//Error - invalid operands to binary + 
	
	printf("------------------------------------------------------------------\n\n");
	
	
//CODE - 4 We Can Perform Addition Of Pointer With Charector Because Charector Is Internally Integer
	
	char ch8 = 'P';
	
	char *ptr8 = &ch8;
	
	printf("%p\n",ptr8);		//0x500
	printf("%c\n",*ptr8);		//P
	
	printf("%p\n",(ptr8+'A'));	//0x565
	printf("%c\n",*(ptr8+'A'));	//Garbage Value OR Segmentation Foult OR Blank
}       

