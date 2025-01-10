#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        int arr1[size];
        int arr2[size];
        int i;
	int sum1=0;
	int sum2=0;

        printf("Array1 Elements are:\n");

        for(i=0;i<size;i++){

                scanf("%d",&arr1[i]);

		sum1=sum1+arr1[i];
        }

        printf("Array2 Elements are:\n");

        for(i=0;i<size;i++){
		
		scanf("%d",&arr2[i]);

		sum2=sum2+arr2[i];

        }

	if(sum1==sum2){
	
		printf("Sum of the Arrays are Equal\n");
	}else{
	
		printf("Sum of the Arrays are Unequal\n");
	}
}
