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

	int sum1=0;
	int sum2=0;

	for(int i=0;i<rows;i++){
		
		for(int j=0;j<cols;j++){
			
			if(i==j){
			
				sum1=sum1+arr[i][j];
			}
		}
	}

	printf("Sum1=%d\n",sum1);

	for(int i=rows-1;i>=0;i--){
	
		for(int j=cols-1;j>=0;j--){
			
			if(i==j){
			
				sum2=sum2+arr[i][j];
			}
		}
	}

	printf("Sum2=%d\n",sum2);

	int prod;
	prod=sum1*sum2;

	printf("Product of sum of Primary Diagonal and Secondary Diagonal of Declared 2D-Array is ");

	printf("%d\n",prod);
}
