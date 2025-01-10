#include<stdio.h>
void main(){
	
	int x;

	printf("Enter the size of the array:\n");
	scanf("%d",&x);

	int arr[x];
	int i;

	printf("Enter the array Elements:\n");

	for(i=0;i<x;i++){
	
		scanf("%d",&arr[i]);

	}

	printf("Array Elements are:\n");

	for(i=0;i<x;i++){
	
		printf("%d\n",arr[i]);
	
	}

	printf("Array in reverse alternste order:\n");

	for(i=x-1;i>=0;i--){
	
		if(i%2==0){

		printf("%d\n",arr[i]);
		
		}
	}








}
