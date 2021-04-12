#include <stdio.h>

int main(){
    float matrix_1[2][2] ,matrix_2[2][2];
    float sum[2][2];
    int i ,j;

    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&matrix_1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&matrix_2[i][j]);
        }
    }
    printf("Sum of Matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
            printf("%.2f \t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}