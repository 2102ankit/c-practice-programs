#include <stdio.h>
int main()
{
    int a, i = 0; 
    while (1)
    {
        printf("Enter a number:");
        scanf("%d", &a);
        if (a < 0)
        {
            printf("total positive numbers entered are %d", i);
            break;
        }
        i++;
    }
    return 0;
}