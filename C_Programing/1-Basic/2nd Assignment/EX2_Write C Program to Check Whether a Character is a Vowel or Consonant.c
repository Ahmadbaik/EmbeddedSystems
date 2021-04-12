#include <stdio.h>

int main(){
    char chr = ' ';
    printf("Enter an alphbet: ");
    scanf("%c", &chr);
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
        chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
        printf("%c is vowel\n", chr);
    }
    else{
        printf("%c is consonant", chr);
    }

    return 0;
}