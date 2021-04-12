 #include <stdio.h>
#include <stdlib.h>

 int main(){
     int i ,NumberOfElements;
     float AverageNumber=0;
     float *arr;
     printf("Enter The number of data: ");
     scanf("%d",&NumberOfElements);
     arr = (float*) malloc(NumberOfElements * sizeof(float));
     for(i=0;i<NumberOfElements;i++){
         printf("%d. Enter number: ",i+1);
         scanf("%f",arr+i);
         AverageNumber += (*(arr+i)) ;
     }

     AverageNumber /= NumberOfElements;
     printf("Average = %f",AverageNumber);
     free(arr);

     return 0;
 }