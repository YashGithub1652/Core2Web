#include<stdio.h>
void main(){

	int x;

	printf("Enter the no. of Array:\n");
	scanf("%d",&x);

	int arr[x];
	int i;

	printf("Array Elements are:\n");

	for(i=0;i<x;i++){
	
		scanf("%d",&arr[i]);
	}

	int index;

	printf("Enter the index for output:\n");
	scanf("%d",&index);

	for(i=0;i<x;i++){
	
		if(i=index){
		
			printf("Element is %d\n",arr[i]);

			break;
		}
	}

}
