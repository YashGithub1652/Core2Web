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

	int index;

	printf("Enter upto which you want to print the array:\n");

	scanf("%d",&index);

	if(index>=x){
	
		printf("unreachable index, Re-Enter index:\n");

		scanf("%d",&index);

	}

	printf("------------------\n");	

	for(i=0;i<index;i++){
	
		printf("%d\n",arr[i]);
	
		}

}
