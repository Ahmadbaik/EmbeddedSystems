#include <stdio.h>
#include <stdlib.h>

int main(){
    int i ,j ,NumberOfRow,NumberOfColumn,count;
    int *arr;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&NumberOfRow,&NumberOfColumn);
    arr = (int*) malloc((NumberOfRow * NumberOfColumn) * sizeof(int));

    for(i=0;i<(NumberOfRow * NumberOfColumn);i++){
        printf("%d. Enter number: ",i+1);
        scanf("%d",arr+i);
    }
    printf("Entered Matrix:\n");
    for(count=0,i=0;i<NumberOfRow;i++){
        for(j=0;j<NumberOfColumn;j++){
            printf("%d\t",*(arr+count++));
        }
        printf("\n");
    }
    printf("Transpose of Matrix:\n");
    for(count=0,i=0;i<NumberOfColumn;i++){
        printf("%d\t",*(arr+count));
        printf("%d\n",*((arr+NumberOfColumn) + count++));
    }
    free(arr);

    return 0;
}