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

        printf("Sum of the 2D-Array forms:\n");

	int sum=0;

        for(int i=0;i<rows;i++){

                for(int j=0;j<cols;j++){

                        sum=sum+arr[i][j];
                }
	}
        
	printf("%d\n",sum);
}
