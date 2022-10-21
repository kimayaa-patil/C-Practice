//ARRAY OF POINTER

#include<stdio.h>
void main(){
//CODE 1
	printf("CODE 1\n");	
 	int x = 10;
 	int y = 20;
 	int z = 30;
 	
 	int* arr[3] = {&x,&y,&z};
 	
 	printf("%ld\n",sizeof(arr));		//24
 	
 	printf("%p\n",arr[0]);			//0x100
 	printf("%p\n",arr[1]);			//0x104
 	printf("%p\n",arr[2]);			//0x108
 	
 	printf("%d\n",*(arr[0]));		//10
 	printf("%d\n",*(arr[1]));		//20
 	printf("%d\n",*(arr[2]));		//30
 		
//CODE 2
	printf("\nCODE 2\n");
	int a = 10;
	char ch = 'A';
	double d = 20.85;
	
	void* arr1[3] = {&x, &ch, &d};
	
	printf("%p\n",arr1[0]);			//0x200
 	printf("%p\n",arr1[1]);			//0x199
 	printf("%p\n",arr1[2]);			//0x208
 	
 	printf("%d\n",*((int*)(arr1[0])));		//10
 	printf("%c\n",*((char*)(arr1[1])));		//A
 	printf("%lf\n",*((double*)(arr1[2])));	//20.85
 
//CODE 3
	printf("\nCODE 3\n");	
 	char arr2[3] = {'A','B','C'};
	char arr3[3] = {'D','E','F'};
	char arr4[3] = {'G','H','I'};
	
	char* cparr[3] = {arr2,arr3,arr4};
	
	printf("%d\n",sizeof (cparr));	//24
	
	cparr[0] = arr2+1;			//0x301
	cparr[1] = arr3+2;			//0x305
	cparr[2] = arr4;			//0x306
	
	printf("%c\n",*(cparr[0]));		//B
	printf("%c\n",*(cparr[1]));		//F
	printf("%c\n",*(cparr[2]));		//G
	
//CODE 4
	printf("\nCODE 4\n");
	int arr5[3] = {10,20,30};
	int arr6[3] = {40,50,60};
	
	int* iparr[] = {&arr1,&arr2};
	
	printf("%p\n",iparr[0]);		//0x400
	printf("%p\n",iparr[1]);		//0x408
	
	iparr[0] = arr5+1;
	iparr[1] = arr6;
	
	printf("%d\n",*(iparr[0]));		//20
	printf("%d\n",*(iparr[1]));		//40
	 	
 }
