#include <stdio.h>

void removed(char string[])
{   int i;
    for (i = 0; string[i] != 0; i++);

    for (int j = 0; j < i; j++)
    {   if (!((string[j] > 96 && string[j] < 123)    ||     (string[j] > 64 && string[j] < 91)))
        {   string[j]=string[j+1];
            i--;
            j--;
        }
    }
    string[i]=0;
}

int main()
{
    char str[20];

    printf("Enter the String: \n");
    scanf("%[^\n]", str);

    removed(str);
    printf("The final string is %s ", str);

    return 0;
}