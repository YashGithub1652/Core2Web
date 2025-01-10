#include<stdio.h>
void main (){

	int x;
	int i;

	printf("Enter the no. of array:\n");
	scanf("%d",&x);

	int arr[x];
	int count=0;

	printf("Enter the elements of the array:\n");

	for(i=0;i<x;i++){
	    
		scanf("%d",&arr[i]);
	}

	printf("Index of Element divisible by 5 is:\n");

	for(i=0;i<x;i++){
		
		if(arr[i]%5==0){
		
			count++;
			printf("%d\n",i);
		}else{
		
			printf("None\n");
		}
	}
}
