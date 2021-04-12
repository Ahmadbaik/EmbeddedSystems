#include <stdio.h>

int main(){
    int num1 = 0, num2 = 0;
    float res = 0 ;
    char chr = ' ';

    printf("Enter operator either +,-,*,/ : ");
    scanf("%c", &chr);

    printf("Enter tow operands: ");
    scanf("%d %d", &num1, &num2);

    switch (chr){
    case '+':
        res = num1 + num2 ;
        break;
    case '-':
        res = num1 - num2 ;
        break;
    case '*':
        res = num1 * num2 ;
        break;
    case '/':
        res = (float) num1 / num2 ;
        break;
    default:
        printf("Operation not valid");
        break;
    }
    printf("%d %c %d = %f",num1,chr,num2,res);
    return 0;
}