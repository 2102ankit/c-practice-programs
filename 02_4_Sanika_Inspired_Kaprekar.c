#include<stdio.h>
#include<math.h>

int main()
{
    int n, sq, d=1, a, b, sum, var,p;
    printf("Enter the value of a number \n");
    scanf("%d", &n);
    p=n;
    var=n;
    sq=pow(n,2);
    printf("%d is the squared number\n", sq);
    while (n!=0)
    {
       d*=10;
       n/=10;
    }
    a=sq%d;
    b=sq/d;

    sum=a+b;
    if (var==sum)
    {
        printf("%d is a Kaprekar number",p);
    }
    else
    {
        printf("%d is not a Kaprekar number", p);
    }
    
    
return 0;
}
