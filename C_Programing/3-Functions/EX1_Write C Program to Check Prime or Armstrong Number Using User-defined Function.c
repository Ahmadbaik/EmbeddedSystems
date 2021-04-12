#include <stdio.h>

int main(){
    int num1 ,num2 ,i;
    printf("Enter tow number(intervals): ");
    scanf(" %d %d",&num1,&num2);
    for(i=num1;i<=num2;i++){
        if(i !=1 && i%2==1){
            printf("%d ",i);
        }
    }

    return 0;
}
