#include<stdio.h>
void main(){

        int size1;
	int size2;

        printf("Enter the size of the array1:");
        scanf("%d",&size1);

	printf("Enter the size of the array2:");
        scanf("%d",&size2);

        int arr1[size1];
        int arr2[size2];

        printf("Array1 Elements are:\n");

        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);

        }

        printf("Array2 Elements are:\n");

        for(int i=0;i<size2;i++){

        	scanf("%d",&arr2[i]);

        }

	if(size1==size2){

               printf("length of the Arrays are Equal\n");
        }else{

               printf("length of the Arrays are Unequal\n");
        }

}
