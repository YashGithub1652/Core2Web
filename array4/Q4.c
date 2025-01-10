#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of the array:\n");
        scanf("%d",&x);

        int arr[x];
        int i,j;

        printf("Enter the array Elements:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr[i]);

        }

        long fact[x];

        printf("Factorial of ELements of the array are:\n");

        for(i=0;i<x;i++){

	long prod=1;

		for(j=1;j<=arr[i];j++){

                	prod=prod*j;

			}
	
		printf("%ld\n",prod);
	
		}
}
