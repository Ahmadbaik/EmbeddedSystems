#include <stdio.h>
#define circule 3.14159*2
#define area(rad)   rad*circule 
int main(){
    float result,rad;
    printf("Enter the radius: ");
    scanf("%f",&rad);
    printf("Area = %f",area(rad));



    return 0;
}