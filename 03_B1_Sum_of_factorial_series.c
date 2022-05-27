#include<stdio.h>
long int factorial(int n)
{
    long int x,factorial=1;
    for (x = 1; x <= n; x++) 
        {factorial*= x;}
    return factorial;
}

int main()
{  
    long int n,sum=0,i;
    printf("Enter the value of n: ");
    scanf("%ld", &n);
    for ( i=1; i <=n; i++)
    {sum=sum + (factorial(i))/i;}
    printf("The value of sum is:%ld",sum);
    return 0;
}
 