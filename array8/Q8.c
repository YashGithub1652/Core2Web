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

        printf("2D-Array forms:\n");

        for(int i=0;i<rows;i++){

                for(int j=0;j<cols;j++){

                        printf("%d ",arr[i][j]);
                }

                printf("\n");
        }

	printf("Sum of the Secondary Diagonal of a 2D array is:\n");
	
	int sum=0;

	for(int i=rows-1;i>=0;i--){
	
		for(int j=cols-1;j>=0;j--){
		
			if(i==j){

				sum=sum+arr[i][j];
			}
		}
	}

	printf("%d\n",sum);
}
