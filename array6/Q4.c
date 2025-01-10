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

        printf("Minimum Element of the Array is:\n");

        int min;
        min=arr[0];

        for(int i=1;i<x;i++){

                if(min>arr[i]){

                        min=arr[i];
                }
        }

        printf("%d\n",min);
}
