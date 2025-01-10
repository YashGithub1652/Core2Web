#include<stdio.h>
void main(){

        int size1;
        int size2;
	int size3;

        printf("Enter the size of the array1:");
        scanf("%d",&size1);

        printf("Enter the size of the array2:");
        scanf("%d",&size2);

	printf("Enter the size of the array3:");                                                                                                                    
	scanf("%d",&size3);
        
	int arr1[size1];
        int arr2[size2];
	int arr3[size3];

        printf("Array1 Elements are:\n");

        for(int i=0;i<size1;i++){

                scanf("%d",&arr1[i]);

        }

        printf("Array2 Elements are:\n");

        for(int i=0;i<size2;i++){

                scanf("%d",&arr2[i]);

        }
	
	printf("Array3 Elements are:\n");   

	for(int i=0;i<size3;i++){
		
		arr3[i]=arr1[i]+arr2[i];

		printf("%d\n",arr3[i]);

	}
}
