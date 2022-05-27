

#include <stdio.h>

int tile(int m, int n)
{

       if (m == 0 || n == 0)                     //---> base case
              return 0;

       else if (m % 2 == 0 && n % 2 == 0)        //---> both even
              return tile(m / 2, n / 2);

       else if (m % 2 == 0 && n % 2 == 1)        //---> one odd
              return (m + tile(m / 2, n / 2));

       else if (m % 2 == 1 && n % 2 == 0)        //---> one odd
              return (n + tile(m / 2, n / 2));

       else                                      //----> both odd
              return (m + n - 1 + tile(m / 2, n / 2));
}

int main()
{
       int m, n;
       printf("Enter the value of length ");
       scanf("%d", &m);

       printf("\nEnter the value of breadth ");
       scanf("%d", &n);

       printf("\nThe minimum number of tiles required is %d", tile(m, n));
       return 0;
}

 