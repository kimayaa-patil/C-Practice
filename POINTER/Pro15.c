//DYGLIN POINTER

#include<stdio.h>
	
int a = 10;
int b;
int *ptr = 0;	//Null Pointer
	
void fun(){
		
	int x = 30;
	printf("%d\n",a);	//10
	printf("%d\n",b);	//0
		
	ptr = &x;
		
	printf("%p\n",ptr);	//0x100
	printf("%d\n",*ptr);	//30
}
void main(){
		
	printf("%d\n",a);	//10
	printf("%d\n",b);	//0 
		
	fun();			//Call fun function
	
	//Dyglin Pointer
		
	printf("%p\n",ptr);	//0x100
	printf("%d\n",*ptr);	//30
}


/* After the scaope of the function is executed still prt look at the address of x veriable that is 0x100, that pointer know the value of the address, but the any other variable allocate that address then will be problem */
