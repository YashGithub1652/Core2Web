#include<stdio.h>
void main(){

        int x;
        int y;

        printf("Enter the size of the array1:");
        scanf("%d",&x);

        printf("Enter the size of the array2:");
        scanf("%d",&y);

        int arr1[x];
        int arr2[y];
        int temp;
        int i;

        printf("Array1 Elements are:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr1[i]);

        }

        printf("Array2 Elements are:\n");

        for(i=0;i<y;i++){

                scanf("%d",&arr2[i]);

        }

        printf("Array Elements in swap order are:\n");

 	for(int i=0;i<x;i++){

        	temp=arr1[i];
        	arr1[i]=arr2[x-i-1];
        	arr2[x-i-1]=temp;

	}

	printf("Array 1 is\n");

        for(i=0;i<x;i++){

                printf("%d\n",arr1[i]);

        }

	printf("Array 2 is \n");

        for(i=0;i<x;i++){

                printf("%d\n",arr2[i]);

        }
}
