#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of the array:\n");
        scanf("%d",&x);

        int arr[x];
        int i;

        printf("Enter the array Elements:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr[i]);

        }

        printf("Factors of Array of Element of\n");

        for(i=0;i<x;i++){

		printf("%d are\n",arr[i]);

          	for(int j=1;j<=arr[i];j++){
		
			if(arr[i]%j==0){
			
				printf("%d\n",j);
			
			}
		
		}
		
        }

}
