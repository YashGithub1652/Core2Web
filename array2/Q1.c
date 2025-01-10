#include<stdio.h>
void main(){

	int x;

	printf("Enter the no. of array:\n");
	scanf("%d",&x);

	int arr[x];
	int i;

	printf("Enter the elements of the array:\n");
	
		for(i=0;i<x;i++){
		
			scanf("%d",&arr[i]);
		}

	printf("Array elements are:\n");

		for(i=0;i<x;i++){
		
		printf("%d\n",arr[i]);
		
		}


	printf("Entered array in reverse order:\n");

		for(i=x-1;i>=0;i--){
		
			printf("%d\n",arr[i]);
		}

}
