#include <stdio.h>

long long int fact(int num);

int main(){
    int num;
    printf("Enter an positive integer: ");
    scanf(" %d",&num);
    printf("Factorial of %d = %lld",num,fact(num));

    return 0;
}

long long int fact(int num){
    if(num == 1){
        return 1;
    }else{
        return num * fact(num-1);
    }
}