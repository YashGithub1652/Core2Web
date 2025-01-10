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

	for(int i=0;i<size1;i++){

        if(arr1[i]==arr2[i]){

               printf("Elements of the Arrays are Same\n");
        }else{

               printf("Elements of the Arrays are Different\n");
        }

	}
}
