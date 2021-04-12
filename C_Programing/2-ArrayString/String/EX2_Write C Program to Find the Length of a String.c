#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char txt[100];
    int char_counter;

    printf("Enter a string: ");
    for (char_counter = 0; char_counter < (sizeof(txt)/sizeof(char)); char_counter++)
    {
        scanf("%c", txt + char_counter);
        if (*(txt + char_counter) == '\n')
        {
            break;
        }
    }
    printf("Length of string = %d",char_counter);

    return 0;
}