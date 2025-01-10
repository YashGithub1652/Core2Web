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

	int size3;
	size3=size1+size2;
	int arr3[size3];

        printf("Array3 Elements are:\n");
		

	        for(int i=0;i<size1;i++){

        	       arr3[i]=arr1[i];

        	}	

		for(int i=0;i<size2;i++){

			 arr3[size1+i]=arr2[i];
		}

	for(int i=0;i<size3;i++){
		
		printf("%d\n",arr3[i]);	
	}

}
