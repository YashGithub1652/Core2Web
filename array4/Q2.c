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

        printf("Array Elements are:\n");

        for(i=0;i<x;i++){

                printf("%d\n",arr[i]);

        }

        int flag=0;

        printf("Composite ELements of the array are:\n");

        for(i=0;i<x;i++){

                if(arr[i]>1){

                        flag=0;
                }


                for(int j=2;j<arr[i];j++){

                        if(arr[i]%j==0){

                                flag=1;
                                break;
                }
        }

        if(flag==1){

                printf("%d\n",arr[i]);

                }
        }
}
