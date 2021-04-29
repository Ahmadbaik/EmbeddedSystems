#include <stdio.h>

int main(){
    char str[100] = " ";
    char *pc = str;
    printf("Input a string: ");
    scanf(" %s",str);
    printf("Reverse string is: ");
    for(pc = (str + sizeof(str))-1; pc >= str ; pc--){
        printf("%c",*pc);
    }

    return 0;
}