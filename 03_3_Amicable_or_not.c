#include<stdio.h>

int amicable(int,int); // function declaration
int main()
{ 
    int num1, num2;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    int res=amicable(num1,num2);

    if (res==1) 
        printf("%d and %d are amicable", num1,num2);
    else 
        printf("%d and %d are not amicable",num1,num2);

    return 0;
}

int amicable (int a, int b)
{
     int suma=0, sumb=0,i;
     for (i=1; i<=a/2; i++)
        if (a%i==0)
         suma+=i;
    
     for (i=1; i<=b/2; i++)
        if (b%i==0)
         sumb+=i;

    if (suma==b && sumb==a)
        return 1;
    else 
        return 0;
}
