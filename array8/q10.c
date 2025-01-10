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

	for(int i=0;i<rows;i++){
	
		for(int j=0;j<cols;j++){

		
			if(i==0&&j==0){
			
				printf("%d\n",arr[i][j]);

			}else if(i==0&&j==cols-1){
			
				printf("%d\n",arr[i][j]);

			}else if(j==0&&i==rows-1){

                                printf("%d\n",arr[i][j]);

                        }else if(i==rows-1&&j==cols-1){

                                printf("%d\n",arr[i][j]);
                        }
		}
	}
}
