#include <stdio.h>

int main(){
    int arr[15],size,i;
    int *p = arr;
    printf("Input number of elements to store into array (max15): ");
    scanf("%d",&size);
    printf("Input %d numbers of elements in the array :\n",size);
    for(i=1;p<(arr + size);p++,i++){
        printf("element - %d : ",i);
        scanf(" %d",p);
    }
    printf("The elements of array in reverse order are : \n");
    for(i=5,p = (arr + size)-1;p>=arr;i--,p--){
        printf("element - %d : %d\n",i,*p);
    }



    return 0;
}