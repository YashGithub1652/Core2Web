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

        int elementsearch;

        printf("Enter the index for output:\n");
        scanf("%d",&elementsearch);

        for(i=0;i<x;i++){

                if(arr[i]=elementsearch){

                        printf("Element is found at index %d\n",i);

                        break;
                }
        }

}
~                                                                                                                                                           ~                                                                                                                                                           ~
