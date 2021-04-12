#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter value of a: ");
    scanf("%d", &num1);
    printf("Enter value of b: ");
    scanf("%d", &num2);
    num1 = num1 + num2; 
    num2 = (num1 > num2) ? num1 - num2 : num2 - num1;
    num1 = num1 - num2; 
    printf("After swapping, value of a = %d\n", num1);
    printf("After swapping, value of a = %d\n", num2);

    return 0;
}