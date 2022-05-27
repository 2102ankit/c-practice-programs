#include<stdio.h>
int main()
{    int num1, num2,i,hcf;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for ( i = 1; i < num1; i++)
    {if (num1%i==0 && num2%i==0)
        {  hcf=i;  }
    }
    if (hcf==1)
    { printf("The numbers are relatively prime.");}
    else
    { printf("The numbers are not relatively prime.");}
    
    return 0;
}


 