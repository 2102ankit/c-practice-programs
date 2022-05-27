// Write a recursive function which returns the nth term of the fibonacci series. Call it from main()
// to find the 1st n numbers of the fibonacci series
// 1,1,2,3,5,8,13,21,
// sum = sum + previous sum
// return fibo(n)+fibo(n-1)

#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n-1 ; i++)
    {
        printf(" %d", fibo(i));
    }

    return 0;
}

int fibo(int n)
{
    if (n > 1)
        return (fibo(n - 1) + fibo(n - 2));
    else if (n==1)
    {
       return 1;
    }
    else
        return 0;
}
 