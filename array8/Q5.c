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

        printf("Sum of Columns of 2D-Array forms:\n");

	int j;

        for(int i=0;i<cols;i++){

		int sum=0;

		for(j=0;j<rows;j++){

                        sum=sum+arr[j][i];
                }

                printf("Sum of %dth Column is %d\n",i,sum);
        }
}
