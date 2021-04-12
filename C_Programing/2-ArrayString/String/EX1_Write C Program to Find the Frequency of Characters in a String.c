#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char txt[100], chr;
    int char_counter;
    int freq = 0;

    printf("Enter a string: ");
    for (char_counter = 0; char_counter < (sizeof(txt)/sizeof(char)); char_counter++)
    {
        scanf("%c", txt + char_counter);
        if (*(txt + char_counter) == '\n')
        {
            break;
        }
    }
    printf("Enter a character to find frequency: ");
    fflush(stdin);
    scanf(" %c", &chr);
    while (char_counter >=0)
    {
        if (chr == txt[char_counter])
        {
            freq++;
        }
        char_counter--;
    }

    printf("Frequncey of %c is %d", chr, freq);
    return 0;
}