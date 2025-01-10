#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. array:\n");
        scanf("%d",&x);

        int i;
        char arr[x];

        printf("Enter the Character in array:\n");

        getchar();

        for(i=0;i<x;i++){

                scanf("%c",&arr[i]);

                getchar();
	}	

        printf("Odd Array elements are:\n");

        for(i=0;i<x;i++){

		if(i%2==0){

                printf("%c\n",arr[i]);
		
		}
        }

}
