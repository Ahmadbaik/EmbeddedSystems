#include <stdio.h>

int main(){
    float num=0;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num>0){
        printf("%f is positive\n", num);
    }else if(num==0){
        printf("You entered zero\n");
    }else{
        printf("%f is negative\n", num);
    }

    return 0;
}