#include <stdio.h>

int main(){
    char letter = 'A';
    char* pc = &letter;
    for(; *pc !='[' ;(*pc)++){
        printf("%c ",*pc);

    }


    return 0;
}