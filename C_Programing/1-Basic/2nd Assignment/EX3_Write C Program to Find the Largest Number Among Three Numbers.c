#include <stdio.h>

int main(){
    float x=0, y=0, z=0;
    printf("Enter three number: ");
    scanf("%f %f %f", &x, &y, &z);
    if (x>y && x>z){
        printf(" Largest number %f\n", x);
    }
    else if(y>x && y>z){
        printf(" Largest number %f\n", y);
    }else{
        printf(" Largest number %f\n", z);
    }

    return 0;
}