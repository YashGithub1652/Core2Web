#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of array:\n");
        scanf("%d",&x);

        int arr[x];
        int i;

        printf("Enter the Elements of the array:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr[i]);

        }

	int flag=0;

	for(i=0;i<x;i++){
	
		if(arr[i]<arr[i+1]){
		
			flag=1;
			break;
		}
	
	}

	if(flag==1){
	
		printf("Array is Not Decreasing\n");
	
	}else{
	
		printf("Array is Decreasing\n");
	}
}
