#include<stdio.h>
void main(){ 
	
	int x;

        printf("Enter the no. of childrens:\n");
        scanf("%d",&x);

        int arr[x];
        int i;

        printf("Enter the age of the childrens:\n");

        for(i=0;i<x;i++){

               scanf("%d",&arr[i]);

               if(arr[i]>5){

                     printf("Age INVALID----Re-enter age:\n");

                     scanf("%d",&arr[i]);

              }

	}

	printf("childrens age are:\n");

        for(i=0;i<x;i++){

            printf("%d\n",arr[i]);


        }

}



