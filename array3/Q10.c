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
	int sum1=0;
	int sum2=0;
        int i;

        printf("Array1 Elements are:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr1[i]);

		if(i%2==1){

			sum1=sum1+arr1[i];
        	
		}
	}

        printf("Array2 Elements are:\n");

        for(i=0;i<y;i++){

                scanf("%d",&arr2[i]);
		
		if(i%2==0){  

			sum2=sum2+arr2[i];                                                                                                                                                                                                                                                                                                  	}

        }

        printf("Arrays Elements even indexed sum of array1 and odd indexed sum of array2 are:\n");

                printf("%d\n",sum1);

                printf("%d\n",sum2);
}

