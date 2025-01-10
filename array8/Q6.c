#include<stdio.h>
void main(){

        int rows,cols;

        printf("Enter the Rows Coloums for Array:\n");
        scanf("%d %d",&rows,&cols);

        int arr[rows][cols];

        printf("Enter the Element for the Array:\n");

        for(int i=0;i<rows;i++){

                for(int j=0;j<cols;j++){

                                scanf("%d",&arr[i][j]);
                        }
                }

	printf("Array Elements are:\n");

	for(int i=0;i<rows;i++){
	
		for(int j=0;j<cols;j++){
		
			printf("%d ",arr[i][j]);
		}

		printf("\n");
	}

        printf("Elements of 2D-Array which are multiple of 3:\n");

        for(int i=0;i<rows;i++){

                for(int j=0;j<cols;j++){

                        if(arr[i][j]%3==0){

				printf("%d\n",arr[i][j]);
                	}
		}
        }
}
