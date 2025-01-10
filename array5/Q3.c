#include<stdio.h>
void main(){

        int x;

        printf("Enter the no. of Array:\n");
        scanf("%d",&x);

        int arr[x];
        int i;

        printf("Array Elements are:\n");

        for(i=0;i<x;i++){

                scanf("%d",&arr[i]);
        }

        printf("Enter the count of Even and Odd Element of Array: ");

	int evencount=0;
	int oddcount=0;

        for(i=0;i<x;i++){

                if(arr[i]%2==0){

                        evencount++;

                }else{
		
			oddcount++;
		}
        }

	printf("%d and %d\n",evencount,oddcount);
}                                                                                                                                                                                                                                                                                           
