#include<stdio.h>

int main ()
{   int a,b, n1, n2,r,l;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    n1=a, n2=b;

    while (n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    l=a*b/n1;
    printf("the gcd of two numbers is %d",n1);
    printf("\n the lcm of two numbers is %d",l);

        return 0;
}
