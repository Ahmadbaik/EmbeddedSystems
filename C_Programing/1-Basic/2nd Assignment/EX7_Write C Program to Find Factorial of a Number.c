#include <stdio.h>

int main(){
    int num = 0;
    long long int res = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Erorr !!! factorial of negative number dosen\'t exist");
    }else if(num == 0){
        printf("factorial of zero is 1");
    }else{
        for(int i=1;i<=num;i++){
            res *= i;
        }
        printf("Sum = %lld",res);
    }
    return 0;
}