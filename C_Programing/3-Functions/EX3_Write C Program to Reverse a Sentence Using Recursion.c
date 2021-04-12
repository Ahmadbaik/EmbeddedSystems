#include <stdio.h>

void reverse(void);
int main(){
    printf("Enter a sentence: ");
    reverse();
    return 0;
}

void reverse(void){
    char chr;
    if((chr = getchar()) != '\n'){
        reverse();
        printf("%c",chr);
        
    }
}