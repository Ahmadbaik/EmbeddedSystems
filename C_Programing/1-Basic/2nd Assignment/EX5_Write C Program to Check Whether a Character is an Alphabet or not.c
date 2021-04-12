#include <stdio.h>

int main(){
    char chr =' ';
    printf("Enter a Character: ");
    scanf("%c", &chr);
    if (chr >=65 && chr <= 90 || chr >=97 && chr <=122){
        printf("%c is an alphabet\n", chr);
    }else{
        printf("%c is not an alphabet\n", chr);
    }

    return 0;
}