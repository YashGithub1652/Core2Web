#include<stdio.h>
void main(){

        int size;
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        int arr1[size];
        int arr2[size];

        printf("Array1 Elements are:\n");

        for(int i=0;i<size;i++){

                scanf("%d",&arr1[i]);

		arr2[size-1-i]==arr1[i];
        }

        printf("Array2 Elements are:\n");

        for(int i=0;i<size;i++){

        	printf("%d\n",arr2[i]);

        }

}
