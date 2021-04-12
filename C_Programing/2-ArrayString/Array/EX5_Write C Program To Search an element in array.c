
#include <stdio.h>
#include <stdlib.h>

int main(){
     int i ,NumberOfElements ,element ,location ,flag=0;
     int *arr;
     printf("Enter The number of data: ");
     scanf("%d",&NumberOfElements);
     arr = (int*) malloc(NumberOfElements * sizeof(int));
     for(i=0;i<NumberOfElements;i++){
         printf("%d. Enter number: ",i+1);
         scanf("%d",arr+i);
     }
     printf("Enter the element to be searched: ");
     scanf("%d",&element);

    for(i=0;i<NumberOfElements;i++){
        if(element == *(arr+i)){
            printf("Number found at the location = %d\n",i+1);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Number not found\n");
    }
    free(arr);
     return 0;    
}