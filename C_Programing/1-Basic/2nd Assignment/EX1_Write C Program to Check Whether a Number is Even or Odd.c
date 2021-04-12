#include <stdio.h>

int main(){
    int num = 0;
    printf("Enter an integer you want to check: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d is even\n",num);
    }else{
        printf("%d is odd",num);
    }

    return 0;
}