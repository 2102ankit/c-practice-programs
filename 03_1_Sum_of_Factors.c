#include<stdio.h>
int sum_all(int n);
int main()
{   int n,i,sum=0;
    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("The Sum of factors of proper divisors of n=%d is %d",n, sum_all(n));
return 0;
}

int sum_all(int n)
 {  int i,sum=0;
     for (i=1; i<=n/2; i++)
    {   if (n%i==0)
        sum+=i;
    }
    return sum;
 }
  