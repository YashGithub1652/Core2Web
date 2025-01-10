#include<stdio.h>
void main(){

        int x;

        printf("Enter the Size of the array:\n");
        scanf("%d",&x);

        int arr[x];

        printf("Enter the Elements of the Array:\n");

        for(int i=0;i<x;i++){

                scanf("%d",&arr[i]);
        }

	printf("2nd Minimum Element of the Array is:\n");

        int min;
        min=arr[0];
        int k=0;

        for(int i=0;i<x;i++){

                if(min>arr[i]){

                        min=arr[i];

                        k=i;

                }

        }

        int num;
        num=arr[0];

        for(int i=0;i<x;i++){

                if(i!=k){

                        if(num>arr[i]){

                                num=arr[i];
                        }

                }

        }
        printf("%d\n",num);	
}
