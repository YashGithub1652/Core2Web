#include<stdio.h>
void main(){

        int size;

        printf("Enter the size of the array1:");
        scanf("%d",&size);

        int arr1[size];
        int arr2[size];
	int arr3[size];

        printf("Array1 Elements are:\n");

        for(int i=0;i<size;i++){

                scanf("%d",&arr1[i]);

        }

        printf("Array2 Elements are:\n");

        for(int i=0;i<size;i++){

                scanf("%d",&arr2[i]);

        }

        printf("Array Elements in swap order are:\n");
	
	int temp[size];

	for(int i=0;i<size;i++){

		temp[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp[i];

	}

        for(int i=0;i<size;i++){

                printf("%d\n",arr1[i]);

        }

	for(int i=0;i<size;i++){

                printf("%d\n",arr2[i]);

        }
}
