#include<stdio.h>
void main(){
	
	int x = 10;
	
	printf("%d\n",x);	//10	
	printf("%d\n",&x);	//-123764 (half Addres in integer format) (Wrong Way To Write) (it line has Warning)
	printf("%ld\n",&x);	//24564651546 (Addres)	(Wrong Way To Write) (it line has Warning)
	printf("%p\n",&x);	//0x100 (Addres)
	
	int *ptr = &x;
	printf("%p\n",ptr);	//0x100 (Addres)
	printf("%p\n",&ptr);	//0x200 (Addres of pointer)
}
