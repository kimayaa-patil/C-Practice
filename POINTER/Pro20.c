//ADDITION IF NUMBER WHICH IS IN BRACKET

/*   (1)  2  (3)

      4  (5)  6

     (7)  8  (9)    */
     
     

#include<stdio.h>
void main(){

	int rc,sum=0;
	
	printf("Rows And Colom : ");
	scanf("%d",&rc);
	
	int a[rc][rc];
	
	printf("Enter the Elements :\n");
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\nArray is :\n");
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			if(i==j || (i+j==rc-1)){
				sum = sum+a[i][j];
			}
		}
	}
	printf("Sum of both Digonals is : %d\n",sum);
}		
