
#include <stdio.h>
int ack(int m, int n);
int main()
{
    int m = 1, n = 1;
    while (m <= 3)
    {
        while (n <= 6)
        {
            printf("\nA(%d,%d)=%d", m, n, ack(m, n));
            n++;
        }
        n = 1;
        m++;
    }
    return 0;
}

int ack(int m, int n)
{   if (m == 0)
    return n + 1;
    
    else if (m != 0 && n == 0)
    return ack(m - 1, 1);
    
    else if (m != 0 && n != 0)
    return ack(m - 1, ack(m, n - 1));
}

// int main()                 //------> Manual Checking
// {
//     int m=1,n=1;
//     printf("Value =%d", ack(m,n));
//     return 0;
// }

// int m=1;n=1
// while (m<=3)
// {
//    while (n<=6)
//    {
//       printf("A(%d,%d)=%d",m,n,ack(m,n));
//       n++;
//    }
//    m++;
// }

/* . Ackerman’s function is defined by:
A(m,n)=n+1 if m=0
=A(m-1,1) if m≠0 and n=0
=A(m-1, A(m,n-1)) if m≠0 and n≠0
Write a function which given m and n returns A(m,n). Tabulate the values of A(m,n) for all
m in the range 1 to 3 and all n in the range 1 to 6. */
