#include <stdio.h>
#include <math.h>
#include <string.h>
// palindrome using recursion

int pali(char string[], int i, int l)
{   if (i > l / 2)
    return 1;    

    if (string[i] != string[l - i - 1])
        return 0;
    else
        return pali(string, i + 1, l);
}

int main()
{   char string[10]={'a','b','b','b','\0'};
    
    int x=pali(string,0,4);

    if (x==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}