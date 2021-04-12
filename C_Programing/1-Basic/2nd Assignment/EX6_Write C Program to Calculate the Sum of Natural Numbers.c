#include <stdio.h>

int main(){
    int num = 0, res = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        res += i;
    }
    printf("Sum = %d",res);

    return 0;
}