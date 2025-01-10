#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of Array:\n");
        scanf("%d",&x);

        char arr[x];
        int i;

        printf("Array Elements are:\n");
	
	getchar();

        for(i=0;i<x;i++){

                scanf("%c",&arr[i]);

		getchar();
        }

        printf("Format Play:\n");

        for(i=0;i<x;i++){

		for(int j=0;j<=i;j++){

                        printf("%c ",arr[j]);

 		}
		printf("\n");
	}
}
