#include <stdio.h>
#include <math.h>
#include <string.h>
void lexi(int l, char string[l]);
void join(char arr1[], char arr2[]);

int main()
{   printf("Enter first string:");
    char string1[20];
    scanf(" %[^\n]",string1);

    printf("Enter second string:");
    char string2[20];
    scanf(" %[^\n]",string2);
    
    join(string1, string2);

    printf("%s", string1);

    return 0;
}


void lexi(int l, char string[l])
{
    for (int j = 0; j < l - 1; j++)
    {
        for (int i = j + 1; i < l; i++)
        {
            
            if (string[j] > string[i])
            {
                char temp = string[i];
                string[i ] = string[j];
                string[j] = temp;
            }
        }
    }
}

void join(char arr1[], char arr2[])
{
    int n1, n2;
    for (n1 = 0; arr1[n1] != 0; n1++);
    for (n2 = 0; arr2[n2] != 0; n2++);

    for (int i = 0; i < n2; i++)
    {
        arr1[n1 + i] = arr2[i];
    }

    arr1[n1 + n2] = '\0';
    
    lexi(n1 + n2, arr1);
}
