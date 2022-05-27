// C Program to Find the Largest & Smallest Word in a String

#include <stdio.h>
#include <math.h>
#include <string.h>

void function(char string[])
{
    int max_index = 0, max_length = 0, curr_word_index = 0, j, min_index = 0, min_length = 100;
    for (int i = 0; string[i] != 0; i++)
    {
        curr_word_index = i;

        for (j = i; string[j] != 32 || 0; j++);

        j = j - curr_word_index;
        if (j > max_length)
        {
            max_length = j;
            max_index = i;
            j = j + curr_word_index;
            i = j + 1;
        }
        j = j - curr_word_index;
        if (j < min_length)
        {
            min_length = j;
            min_index = i;
            j = j + curr_word_index;
            i = j + 1;
        }
    }
    printf("\n");
    for (int x = max_index; string[x] != 32 || 0; x++)
    {
        printf("%c", string[x]);
    }
    printf("\n");
    for (int x = min_index; string[x] != 32 || 0; x++)
    {
        printf("%c", string[x]);
    }
}

int main()
{
    printf("Enter string:");
    char string[20];
    gets(string);

    function(string);

    return 0;
}