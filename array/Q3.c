#include<stdio.h>
void main(){

        int x;
        int i;

        printf("Enter the no. of array=\n");
        scanf("%d",&x);

        int arr[x];
        int sum=0;


        printf("Array elements are=\n");
        for(i=0;i<x;i++){
                scanf("%d",&arr[i]);
        }

        printf("sum of the even indexed elements are=\n");

        for(i=0;i<x;i++){
                if(arr[i]%2==0){
                   sum=sum+arr[i];
                   printf("%d\n",sum);
                }

        }
}
