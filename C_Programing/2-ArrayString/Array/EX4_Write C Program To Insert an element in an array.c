#include <stdio.h>
#include <stdlib.h>

int main(){
     int i ,NumberOfElements ,element ,location;
     int *arr;
     printf("Enter The number of data: ");
     scanf("%d",&NumberOfElements);
     arr = (int*) malloc(NumberOfElements * sizeof(int));
     for(i=0;i<NumberOfElements;i++){
         printf("%d. Enter number: ",i+1);
         scanf("%d",arr+i);
     }
     printf("Enter the element to be inserted: ");
     scanf("%d",&element);
     printf("Enter the location: ");
     scanf("%d",&location);
    *(arr + --location) = element;

    for(i=0;i<NumberOfElements;i++){
        printf("%d ",*(arr+i));
    }
    free(arr);
     return 0;    
}