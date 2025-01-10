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

        printf("Sum of Each Digit of ELement of the array is:\n");

        for(i=0;i<x;i++){

        int sum=0;

	int rem;
                while(arr[i]!=0){

                        rem=arr[i]%10;
			
				sum=sum+rem;

                        arr[i]=arr[i]/10;

                        }

                printf("%d\n",sum);
        }

}
