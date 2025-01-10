//check increasing array

#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of the array:\n");
        scanf("%d",&x);

        int arr[x];
        int i;

        printf("Enter the array Elements:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr[i]);

        }

        printf("Array Elements are :\n");

	int flag=0;

        for(i=0;i<x-1;i++){

		if(arr[i]>arr[i+1]){

			flag=1;
			break;	
		}
	}

	if(flag==1){
	
		printf("Not Increasing\n");
	}else{
	
		printf("Increasing\n");
	}

}
